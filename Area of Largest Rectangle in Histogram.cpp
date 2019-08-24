#include<stack>
int Solution::largestRectangleArea(vector<int> &A)
{
    int i,max=-1;
    stack<int>s;
    for(i=0;i<A.size();i++)
    {
        if(s.empty()||A[i]>A[s.top()])
        s.push(i);
        else
        {
            while((!s.empty())&&A[i]<A[s.top()])
            {
                int height=A[s.top()];
                s.pop();
                int dist=s.empty()?i:i-s.top()-1;
                int area=height*dist;
                if(area>max)
                max=area;
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        int height=A[s.top()];
        s.pop();
        int dist=s.empty()?i:i-s.top()-1;
        int area=height*dist;
                if(area>max)
                max=area;
    }
    return max;
}
