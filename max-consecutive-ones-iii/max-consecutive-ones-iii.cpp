class Solution {
public:
    int longestOnes(vector<int>& a, int k)
    {
        int ans=0;
        int left=0;
        int right=0;
        while(right < a.size())
        {
            if(a[right]==0)
            {
                while(k==0)
                {
                    if(a[left]==0)
                    {
                        k++;
                    }
                    left++;
                }
                
                k-=1;
            }
            
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};