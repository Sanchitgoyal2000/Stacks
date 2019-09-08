#include <iostream>
using namespace std;
#include<stack>
int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    stack<int>s;
	    int n;
	    cin>>n;
	   long long int a[n],res[n]={-1};
	    int i;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    s.push(0);
	    for(i=1;i<n;i++)
	    {
	        if(!s.empty()&&a[i]<a[s.top()])
	        s.push(i);
	        else
	        {
	           while(!s.empty()&&a[i]>a[s.top()])
	           {
	               res[s.top()]=a[i];
	               if(!s.empty())
	               s.pop();
	           }
	           s.push(i);
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(res[i]==0)
	          cout<<-1<<" ";
	        else
	         cout<<res[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}

//use top only when stack not empty so put condition when stack not empty
//then top and pop only
