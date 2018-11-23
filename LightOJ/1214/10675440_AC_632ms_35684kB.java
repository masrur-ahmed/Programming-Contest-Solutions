/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int cas=1, t=sc.nextInt();
		BigInteger x,y;
		for(int i=1;i<=t;i++){
		x=sc.nextBigInteger();
		y=sc.nextBigInteger();
		if(x.abs().mod(y.abs())==BigInteger.ZERO)System.out.println("Case "+i+": divisible");
		else System.out.println("Case "+i+": not divisible");
		}
	}
}