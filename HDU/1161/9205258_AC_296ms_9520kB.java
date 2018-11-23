/* package whatever; // don't place package name! */

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		
		while(sc.hasNextLine()){
			String x = sc.nextLine();
			String y = x.toLowerCase();
			System.out.println(y);
		}
		
	}
}