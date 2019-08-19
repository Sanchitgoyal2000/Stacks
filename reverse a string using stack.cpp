#include<iostream>
#include<malloc.h>
#include<stack>
#include<cstring>
using namespace std;
void reverse1(char *ch,int n);
int main()
{
 char *ch;
 ch=(char *)malloc(sizeof(char));
 cin>>ch;
 reverse1(ch,strlen(ch));
 cout<<ch;
}
void reverse1(char *ch,int n)
{
 stack<char>s;
 for(int i=0;i<n;i++)
 {
  s.push(ch[i]);
 }
 int i=0;
 while(!s.empty())
 {
  ch[i]=s.top();
  s.pop();
  i++;
 }
}

