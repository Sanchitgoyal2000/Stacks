string Solution::simplifyPath(string s)
{
    string res,sss="";
    stack<string>ss,ss1;
    int h=0;
 for(int i=0;i<s.length();i++)
 {
  if(s[i]=='/'||s[i]=='.')
  continue;
  else if(i+1<s.length()&&s[i]=='.'&&s[i+1]=='.')
  {
   if(!ss.empty())
   ss.pop();
  }
  else if(s[i]>=97&&s[i]<=122)
  {
      while(s[i]!='/'&&i<s.length())
      {
          sss=sss+s[i];
          i++;
      }
   ss.push(sss);
   sss="";
  }
 }
 while(!ss.empty())
 {
     ss1.push(ss.top());
     ss.pop();
 }
  res=res+'/';
     while(!ss1.empty())
     {
         res=res+ss1.top();
         ss1.pop();
         if(!ss1.empty())
         res=res+'/';
     }
      return res;
}
