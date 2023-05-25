/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t-- > 0) {
		    int n = scan.nextInt();
		    if((n&1) == 1) {
		        System.out.println(-1);
		    } else {
		        for(int i = n; i >= 1; i--) {
		            System.out.print(i+" ");
		        }
		    }
		    System.out.println();
		}
	}
}
