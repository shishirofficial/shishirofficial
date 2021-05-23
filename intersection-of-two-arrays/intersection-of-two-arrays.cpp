class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        set<int> s1,s2;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }
        if(s1.size()>s2.size())
        {
            for(auto it:s1)
            {
                auto it1=s2.find(it);
                if(it1 != s2.end())
                {
                    ans.push_back(it);
                }
            }
        }
        else if(s2.size()>s1.size())
        {
            for(auto it:s2)
            {
                auto it2=s1.find(it);
                if(it2 != s1.end())
                {
                    ans.push_back(it);
                }
            }
        }
        else
        {
            for(auto it:s2)
            {
                auto it2=s1.find(it);
                if(it2 != s1.end())
                {
                    ans.push_back(it);
                }
            }
        }
        return ans;
    }
};