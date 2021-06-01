class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i < nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        for(auto it:mp)
        {
            vector<int> v= it.second;
            if(v.size() == 2)
            {
                if(abs(v[0]-v[1]) <= k)
                {
                    return true;
                }
            }
            else
            {
                for(int i=0;i<v.size()-1;i++)
                {
                   for(int j=i+1;j<v.size();j++)
                   {
                       if(abs(i-j) <= k)
                       {
                           return true;
                       }
                   }
                }
            }
        }
       return false; 
    }
};