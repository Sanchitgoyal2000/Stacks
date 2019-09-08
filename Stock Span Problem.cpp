#include <iostream>
using namespace std;
#include<stack>
int main()
{
    	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    stack<int>s;
	    int res[n],count;
	    res[0]=1;
	    s.push(0);
	    for(int i=1;i<n;i++)
	    {
	        count=1;
	        if(!s.empty()&&a[i]<a[s.top()])
	        {
	            res[i]=1;
	            s.push(i);	        }
	        else
	        {
	            while(!s.empty()&&(a[i]>=a[s.top()]))
	            {
	                count=count+res[s.top()];
	                s.pop();
	            }
	            res[i]=count;
	              s.push(i);
	        }

	    }
	    for(int i=0;i<n;i++)
	    cout<<res[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
