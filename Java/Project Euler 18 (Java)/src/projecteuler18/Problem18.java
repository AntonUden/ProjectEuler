package projecteuler18;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class Problem18 {

	public static void main(String[] args) {
		try {
			new Problem18((args.length > 0 ? args[0] : "C:/Problem18.txt"));
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public ArrayList<int[]> lines = new ArrayList<int[]>();
	public ArrayList<ArrayList<Node>> nodes = new ArrayList<ArrayList<Node>>();

	public void loadLines(String path) throws FileNotFoundException {
		File file = new File(path);
		Scanner sc = new Scanner(file);

		// Read lines
		while (sc.hasNextLine()) {
			String[] numbersStr = sc.nextLine().split(" ");
			int[] numbers = new int[numbersStr.length];

			for (int i = 0; i < numbersStr.length; i++) {
				numbers[i] = Integer.parseInt(numbersStr[i]);
			}
			lines.add(numbers);
		}
		
		sc.close();
	}

	public void fillNodeList() {
		// Create node list
		for (int i = 0; i < lines.size(); i++) {
			nodes.add(new ArrayList<Node>());
		}

		// Fill list with nodes
		for (int i = nodes.size() - 1; i >= 0; i--) {
			int[] lineArray = lines.get(i);

			for (int j = 0; j < lineArray.length; j++) {
				Node newNode = new Node(lineArray[j]);

				// Connect previous nodes
				if (i < nodes.size() - 1) {
					newNode.rightNode = nodes.get(i + 1).get(j + 1);
					newNode.leftNode = nodes.get(i + 1).get(j);
				}

				nodes.get(i).add(newNode);
			}
		}
	}

	public Problem18(String path) throws Exception {
		long startTime = System.currentTimeMillis();
		System.out.println("\nReading file " + path + "\n");
		loadLines(path);
		
		System.out.println("\nfilling node list\n");
		fillNodeList();
		
		System.out.println("nodes:");
		for(ArrayList<Node> line : nodes) {
			for(Node node : line) {
				System.out.print(node.value + " ");
			}
			System.out.println("");
		}
		
		System.out.println("\nfinding max value\n");
		
		Node firstNode = nodes.get(0).get(0);
		
		long checkStartTime = System.currentTimeMillis();
		
		System.out.println(firstNode.findMax());
		long checkTime = System.currentTimeMillis() - checkStartTime;
		long totalTime = System.currentTimeMillis() - startTime;
		System.out.println("Found in " + checkTime + " ms. Total time: " + totalTime + " ms");
	}

}
