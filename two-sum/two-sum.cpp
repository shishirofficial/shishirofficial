class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int com=target-nums[i];
            if(mp.find(com) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[com]);
                return ans;
            }
            else
            {
                mp.insert({nums[i],i});
            }
        }
       return ans; 
    }
};