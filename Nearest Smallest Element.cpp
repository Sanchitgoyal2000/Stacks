vector<int> Solution::prevSmaller(vector<int> &a)
{
    int h=1,p=1;
    vector<int>b;
    stack<int>s;
    s.push(0);
    b.push_back(-1);
    for(int i=1;i<a.size();i++)
    {
        h=1;
        if(a[i]>a[s.top()])
        {
           b.push_back(a[s.top()]);
           p++;
            s.push(i);
        }
        else
        {
            while(!s.empty()&&h!=0)
            {
                if(a[s.top()]<a[i])
                {
                    h=0;
                     b.push_back(a[s.top()]);
                    p++;
                    s.push(i);
                }
                else
                s.pop();
            }
            if(h==1)
            {
                 b.push_back(-1);
                p++;
            }
            s.push(i);
        }
    }
    return b;
}
