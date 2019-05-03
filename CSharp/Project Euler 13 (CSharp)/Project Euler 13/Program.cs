using System;
using System.IO;
using System.Numerics;
using System.Reflection;

namespace Project_Euler_13
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger sum = 0;
            string line;
            // ProjectEulerProblem13.txt
            try
            {
                StreamReader file = new StreamReader(Assembly.GetExecutingAssembly().GetManifestResourceStream("Project_Euler_13.ProjectEulerProblem13.txt"));
                while ((line = file.ReadLine()) != null)
                {
                    //Console.WriteLine(line);
                    BigInteger lineInt;
                    if (BigInteger.TryParse(line, out lineInt))
                    {
                        sum += lineInt;
                    }
                }
                file.Close();
                Console.WriteLine("Sum of all lines is " + sum);
                string sumStr = sum.ToString();
                string first = "";
                for (int i = 0; i < 10; i++)
                {
                    if (sumStr.Length > i)
                    {
                        first += sumStr[i];
                    }
                }
                Console.WriteLine("Result: " + first);
            }
            catch (Exception e)
            {
                Console.WriteLine("Error");
                Console.WriteLine(e.Message);
                Console.WriteLine(e.StackTrace);
            }
            Console.ReadLine();
        }
    }
}
