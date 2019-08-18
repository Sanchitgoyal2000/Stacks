#include <iostream>
using namespace std;
#include<stack>
int main()
{
    string s;
    cin>>s;
    int p=0,max=-1,h=0;
    stack<char>ss;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            ss.push('(');
            p++;
            if(p>max)
            max=p;
        }
        else if(s[i]==')')
        {
            if(!ss.empty()&&ss.top()=='(')
            {
                ss.pop();
                p--;
            }
            else
            {
                h=1;
                break;
            }
        }
    }
    if(h==1||ss.size()!=0)
    cout<<"-1\n";
    else
    cout<<max;
	return 0;
}


// link https://www.codechef.com/problems/IFC04P02
/* We are given a string having parenthesis like below
     “( ((X)) (((Y))) )”
We need to find the maximum depth of balanced parenthesis, like 4 in above example.
Since ‘Y’ is surrounded by 4 balanced parenthesis.

Problem description :
Write the 'findMaxDepth' function that takes a string as input. Check whether parenthesis
are balanced or not. If parenthesis are unbalanced return -1, otherwise find maximum depth
 of balanced parenthesis and return maximum depth.

*/
