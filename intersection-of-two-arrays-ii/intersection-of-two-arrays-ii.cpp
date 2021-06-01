class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        int n=nums2.size();
        vector<bool> a(n,0);
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(a[j]==0)
                {
                    if(nums1[i]==nums2[j])
                    {
                        ans.push_back(nums1[i]);
                        a[j]=1;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};