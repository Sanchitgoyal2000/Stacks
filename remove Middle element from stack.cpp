/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include<stack>
void remove1(int);
using namespace std;
stack <int>s;
int size=0;
int main()
{

   s.push(1);
    s.push(2);
     s.push(3);
      s.push(4);
      s.push(9);
      remove1(0);
    while(!s.empty())
    {
        cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}
void remove1(int i)
{
    if(s.empty())
    return;
    int x=s.top();
    size++;
    i++;
    s.pop();
    remove1(i);
    if(size%2==0&&(i!=(size/2)))
   s.push(x);
    else if(size%2!=0&&i!=((size/2)+1))
   s.push(x);
  }
