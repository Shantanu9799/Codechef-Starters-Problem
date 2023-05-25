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
		    String str = scan.next();
		    int[] a = new int[2];
		    Arrays.fill(a, 0);
		    int temp = 0;
		    char Alice = 'S';
		    char Bob = 'R';
		    while(temp < n) {
		        char currentChar = str.charAt(temp);
		        if(Alice=='S' && currentChar=='A') {
		            a[0]++;
		        } else if(Bob=='S' && currentChar=='B') {
		            a[1]++;
		        } else {
		            char tempChar = Alice;
		            Alice = Bob;;
		            Bob = tempChar;
		        }
		        temp++;
		    }
		    for(int i : a) {
		        System.out.print(i + " ");
		    }
		    System.out.println();
		}
	}
}