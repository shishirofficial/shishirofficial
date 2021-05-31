class Solution {
public:
    int maxScore(vector<int>& v, int k) 
    {
        int n=v.size();
        int total=0;
        for(int i=0;i<v.size();i++)
        {
            total+=v[i];
        }
        if(k==n)
        {
            return total;
        }
        vector<int> pref1(n,0),pref2(k+1,0);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                pref1[i]=v[i];
            }
            else
            {
                pref1[i]+=pref1[i-1]+v[i];
            }
        }
        int temp = n-k;
        for(int i=0;i<pref2.size();i++)
        {
            if(i == 0)
            {
                pref2[i]+=pref1[i+temp-1];
            }
            else
            {
                pref2[i]+=pref1[i+temp-1]-pref1[i-1];
            }
        }
        // for(auto it:pref1)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // for(auto it:pref2)
        // {
        //     cout<<it<<" ";
        // }
        int ans=INT_MIN;
        for(int i=0;i<pref2.size();i++)
        {
            ans=max(ans,total-pref2[i]);
        }
        return ans;
    }
};