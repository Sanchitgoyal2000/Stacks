#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>ss;
    string s="ab*c*",res="";
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
         //cout<<"KK";
            string y="";
            y=y+s[i];
            ss.push(y);
        }
        else
        {
            string p=ss.top();
            ss.pop();
            string q=ss.top();
            ss.pop();
            res=q+s[i]+p;
            ss.push(res);
            p="";
            q="";
        }
    }
    cout<<res;
    return 0;
}
