class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> s1,s2;
        vector<int> ans;
        for(auto it:nums1)
        {
            s1.insert(it);
        }
        for(auto it:nums2)
        {
            s2.insert(it);
        }
        if(s1.size()>s2.size())
        {
            for(auto it:s1)
            {
                if(s2.find(it)!=s2.end())
                {
                    ans.push_back(it);
                }
            }
        }
        else
        {
            for(auto it:s2)
            {
                if(s1.find(it)!=s1.end())
                {
                    ans.push_back(it);
                }
            }
        }
       return ans; 
    }
};