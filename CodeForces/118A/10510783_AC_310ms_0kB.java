import java.util.*;
import java.io.*;
public class Main
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		char [] cmp = {'a','o','y','e','u','i'};
		String x = sc.nextLine();
		x = x.toLowerCase();
		char [] a = x.toCharArray();
		
		for (int i = 0; i < a.length; i++) {
			boolean flag = true;
			for (int j = 0; j < cmp.length; j++) {
				if (cmp[j] == a[i]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				System.out.print("." + a[i]);
				flag = true;
			}
		}
		
		System.out.println();
	}
}