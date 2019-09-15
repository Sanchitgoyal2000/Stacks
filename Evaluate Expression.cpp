int Solution::evalRPN(vector<string> &s)// ig given infix first convert it into postfix and then evaluate it
{
    stack<int>ss; // given postfix evaluation and this also works for negative numbers
    int p=0,sign=-1;;
     for(int i=0;i<s.size();i++)
         {
             p=0;
             sign=1;
             for(int j=0;j<s[i].size();j++)
             {
                 if(s[i][j]=='-')
                 {
                     sign=-1;
                     continue;
                 }
              p=p*10+s[i][j]-'0';
             }
             //cout<<p;
             if(s[i]!="+"&&s[i]!="-"&&s[i]!="*"&&s[i]!="/"&&s[i]!="^")
             {
                 ss.push(p*sign);
             }
             else
             {
                 int p=ss.top();
                 ss.pop();
                 int p1=ss.top();
                 ss.pop();
                 if(s[i]=="+")
                 ss.push(p1+p);  // always be p1-p,p1 power p not p-p1,not p power p1;
                 else if(s[i]=="*")
                 ss.push(p1*p);
                 else if(s[i]=="-")
                 ss.push(p1-p);
                else if(s[i]=="^")
                 ss.push(pow(p1,p));
                 else if(s[i]=="/")
                 ss.push(p1/p);
             }
         }
         return ss.top();
}
