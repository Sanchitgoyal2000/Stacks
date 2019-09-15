#include <iostream>
using namespace std;
#include<stack>
#include<math.h>
int main() {
	//code
	int t;
	cin>>t;
	stack<int>ss;
	while(t-->0)
	{
	    string s;
	    cin>>s;
	     for(int i=0;i<s.length();i++)
	     {
	         if(s[i]>='0'&&s[i]<='9')
	         {
	             ss.push(s[i]-'0');
	         }
	         else
	         {
	             int p=ss.top();
	             ss.pop();
	             int p1=ss.top();
	             ss.pop();
	             if(s[i]=='+')
	             ss.push(p1+p);  // always be p1-p,p1 power p not p-p1,not p power p1;
	             else if(s[i]=='*')
	             ss.push(p1*p);
	             else if(s[i]=='-')
	             ss.push(p1-p);
	            else if(s[i]=='^')
	             ss.push(pow(p1,p));
	             else if(s[i]=='/')
	             ss.push(p1/p);
	         }
	     }
	     cout<<ss.top()<<"\n";
	}
	return 0;
}
