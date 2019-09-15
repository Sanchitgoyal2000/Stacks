#include <iostream>
using namespace std;
#include<stack>
#include<algorithm>
//first reverse the expression and then find postfix and then find postfix and then reverse it
//a+b+c prefix is +a+bc is evaluated from last
int prior(char a)
{
    if(a=='+'||a=='-')
    return 1;
    else if(a=='*'||a=='/')
    return 2;
    else if(a=='^')
    return 3;
    else
    return -1;    //for braces give minimum priority
}
int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    string s,y="";
	    cin>>s;
	    reverse(s.begin(),s.end());
	    stack<char>ss;
	    string res="";
	    for(int i=0;i<s.length();i++)
	    {
	        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	        {
	            res=res+s[i];
	        }
	        else if(s[i]==')')
	        {
	            ss.push(')');
	        }
	        else
	        {
	            if(ss.empty())
	            {
	                ss.push(s[i]);
	            }
	            else if(prior(s[i])>prior(ss.top()))
	            {
	                ss.push(s[i]);
	            }
	            else if(s[i]=='(')
	            {
	                while(ss.top()!=')')   //at last only one operand left so add it to result
	                {
	                    res=res+ss.top();
	                    ss.pop();
	                }
	                ss.pop();
	            }
	            else
	            {
	                while(!ss.empty()&&prior(ss.top())>=prior(s[i]))
	                {
	                    res=res+ss.top();
	                    ss.pop();
	                }
	                ss.push(s[i]);
	            }
	        }
	    }
	     while(!ss.empty())
	       {
	        res=res+ss.top();
	        ss.pop();
        }
        reverse(res.begin(),res.end());
	    cout<<res<<"\n";
	}
	return 0;
}
