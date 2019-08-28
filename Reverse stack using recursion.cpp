#include <iostream>
#include<stack>
void reverse();
void insertbottom(int x);
using namespace std;
stack <int>s;
int main()
{
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse();
    while(!s.empty())
    {
        cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}
void reverse()
{
    if(s.empty())
    return;
    int x=s.top();
    s.pop();
    reverse();
    insertbottom(x);
}
void insertbottom(int x)
{
    if(s.empty())
    s.push(x);
    else
    {
            int ss=s.top();
            s.pop();
            insertbottom(x);
            s.push(ss);
    }
}
