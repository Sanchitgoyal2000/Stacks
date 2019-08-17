#include <iostream>
using namespace std;
#include<stack>
#include<string>
int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    string s;
	    cin>>s;
	     stack<char>stac;
        int h=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{')
            {
                stac.push(s[i]);
                continue;
            }
            if(s[i]=='(')
            {
                stac.push(s[i]);
               continue;
            }
            if(s[i]=='[')
            {
                stac.push(s[i]);
               continue;
            }
            if(s[i]=='}')
            {
                if(stac.empty())
                {
                    h=1;
                   break;
                }
                if(stac.top()=='{')
                {
                    stac.pop();
                    continue;
                }
                else
                {
                    h=1;
                    break;
                }
            }
             if(s[i]==')')
            {
                 if(stac.empty())
                 {
                     h=1;
                   break;
                 }
                if(stac.top()=='(')
                {
                    stac.pop();
                    continue;
                }
                else
                {
                    h=1;
                    break;
                }
            }
             if(s[i]==']')
            {
                 if(stac.empty())
                 {
                     h=1;
                    break;
                 }
                if(stac.top()=='[')
                {
                    stac.pop();
                    continue;
                }
                else
                {
                    h=1;
                    break;
                }
            }
        }
        if(stac.size()!=0||h==1)
           cout<<"not balanced"<<"\n";
        else
            cout<<"balanced"<<"\n";
    }
	return 0;
}
