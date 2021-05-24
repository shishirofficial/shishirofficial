class Solution {
public:
    int getsum(int n)
    {
        int totalsum=0;
         while(n>0)
         {
             int r=n%10;
             totalsum+=r*r;
             n=n/10;
         }
       return totalsum; 
    }
    bool isHappy(int n) 
    {
        set<int> s;
        while(n!=1 && s.find(n)==s.end())
        {
            s.insert(n);
            n=getsum(n);
        }
        return n==1;
    }
};