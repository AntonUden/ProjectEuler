package projecteuler18;

public class Node {
	public int value;
	
	public Node rightNode;
	public Node leftNode;
	
	public Node(int value) {
		this.value = value;
	}
	
	public int findMax() {
		if(rightNode != null) {
			int vRight = rightNode.findMax();
			int vLeft = leftNode.findMax();
			
			return value + (vRight > vLeft ? vRight : vLeft);
		}
		return value;
	}
	
	@Override
	public String toString() {
		return value + "";
	}
}