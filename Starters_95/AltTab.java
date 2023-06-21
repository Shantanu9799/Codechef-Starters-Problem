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
		int n = scan.nextInt();
		String[] program = new String[n];
		for(int i = 0; i < n; i++) {
		    program[i] = scan.next();
		}
		ArrayList<String> listOfProgram = new ArrayList<>();
		for(int i = 0; i < n; i++) {
		    if(listOfProgram.contains(program[i])){
		        listOfProgram.remove(program[i]);
		        listOfProgram.add(0, program[i]);
		    } else {
		        listOfProgram.add(0, program[i]);
		    }
		}
		String ans = "";
		for(int i = 0; i < listOfProgram.size(); i++) {
		    String currString = listOfProgram.get(i);
		    ans += currString.substring(currString.length()-2);
		}
		System.out.print(ans);
	}
}
