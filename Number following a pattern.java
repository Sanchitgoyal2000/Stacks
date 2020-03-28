/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		int t;
		Scanner ob=new Scanner(System.in);
		t=ob.nextInt();
		while(t-->0)
		{
		    String ss;
		    ss=ob.next();
		    int num=1;
		    Stack<Integer>s=new Stack<>();
		    for(int i=0;i<=ss.length();i++)
		    {
		        s.add(num++);
		        if(i<ss.length()&&ss.charAt(i)=='I')
		        {
		            while(!s.isEmpty())
		            {
		                System.out.print(s.peek());
		                s.pop();
		            }
		        }
		    }
		    while(!s.isEmpty())
	         {
		       System.out.print(s.peek());
		       s.pop();
	         }
		    System.out.println();
		}
	}
}