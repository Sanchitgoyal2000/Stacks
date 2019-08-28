#include <iostream>
#include<stack>
void sort();
void sort1(int x);
using namespace std;
stack <int>s;
int main()
{
    s.push(11);
    s.push(21);
    s.push(3);
    s.push(40);
    sort();
    while(!s.empty())
    {
        cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}
void sort()
{
    if(s.empty())
    return;
    int x=s.top();
    s.pop();
    sort();
    sort1(x);
}
void sort1(int x)
{
    if(!s.empty()&&s.top()>x)
    {
        int y=s.top();
        s.pop();
        sort1(x);
        s.push(y);
    }
    else
    s.push(x);
}
