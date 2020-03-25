public class Solution {
    public int solve(ArrayList<Integer> l, int b) 
    {
        Integer B=b;
       int count = 0;
       HashMap<Integer,Integer>hm=new HashMap<>();
       for(int i=0;i<l.size();i++)
      {
          if(hm.containsKey(l.get(i)))
          {
             Integer p=hm.get(l.get(i));
             p++;
             hm.put(l.get(i),p);
          }
          else
          {
              hm.put(l.get(i),1);
          }
      }
      int i=0;
      for(Map.Entry<Integer,Integer> entry : hm.entrySet())                                 
      {
          Integer p=entry.getKey();
          if(hm.containsKey(B-p))
          {
              if(hm.get(B-p)>0)
              {
                Integer pp=entry.getValue();
                pp--;
                hm.put(p,pp);
                if(hm.get(B-p)>0)
                  count++;
              }
          }
          i++;
      }
      return count;
      }
}
