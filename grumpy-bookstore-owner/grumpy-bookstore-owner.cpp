class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int k)
    {
        int alonesum=0;
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0)
            {
                alonesum+=customers[i];
            }
        }
        int n=customers.size();
        vector<int> pref1(n,0);
        vector<int> pref2(n,0);
         
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(grumpy[i]==0)pref1[i]+=customers[i];
            }
            else
            {
                if(grumpy[i]==0)
                {
                    pref1[i]+=(pref1[i-1]+customers[i]);
                }
                else
                {
                    pref1[i]=pref1[i-1];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                pref2[i]+=customers[i];
            }
            else
            {
                pref2[i]+=(pref2[i-1]+customers[i]);
            }
        }
        int maxi=-1;
        for(int i=0;i<n-k+1;i++)
        {
            int a=i,b=i+k-1,currsum;
            if(i==0)
            {
                currsum = alonesum - pref1[b] + pref2[b];
            }
            else
            {
                currsum = alonesum - (pref1[b]-pref1[a-1]) + (pref2[b]-pref2[a-1]);
            }
            maxi=max(maxi,currsum);
            
        }
        return maxi;
    }
};