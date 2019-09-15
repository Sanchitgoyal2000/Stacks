#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,i,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int res=0;
	    int max=a[0],l=0,h=0;
	    for(i=1;i<n;i++)
	    {
	        for(j=i-1;j>=0;j--)
	        {
	            if(a[j]>l)
	            l=a[j];
	        }
	        for(j=i+1;j<n;j++)
	        {
	            if(a[j]>h)
	            h=a[j];
	        }
	        if(h<l)
	        l=h;
	       // cout<<l-a[i]<<" "<<i<<"\n";
	        if(l-a[i]>0)
	        res=res+l-a[i];
	        l=0;
	        h=0;
	    }
	    if(res<0)
	    cout<<"0\n";
	    else
	    cout<<res<<"\n";
	}
	return 0;
}
