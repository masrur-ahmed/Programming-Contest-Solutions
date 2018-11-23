import java.util.Scanner;
import java.math.BigInteger;
/* Name of the class has to be "Main" only if the class is public. */
 
class Main
{
	public static void main (String[] args)
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt(),x;
		BigInteger z,ans;
		for(int i = 1 ; i <= t ; i++){
			x=sc.nextInt();
			ans =BigInteger.ONE;
			for(int j = 0 ; j< x ; j++){
				z=sc.nextBigInteger();
				ans=z.multiply(ans).divide(z.gcd(ans));
			}
			System.out.println("Case "+i+": "+ans);
			System.gc();
		}
		
	}
}