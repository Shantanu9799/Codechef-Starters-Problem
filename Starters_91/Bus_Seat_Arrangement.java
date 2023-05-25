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
		    if(n < 16) {
		        if(n < 11) {
		            System.out.println("Lower Double");
		        } else {
		            System.out.println("Lower Single");
		        }
		    } else {
		        if(n < 26) {
		            System.out.println("Upper Double");
		        } else {
		            System.out.println("Upper Single");
		        }
		    }
		}
	}
}