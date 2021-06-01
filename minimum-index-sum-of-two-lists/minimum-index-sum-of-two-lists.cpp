class Solution {
public:
    vector<string> findRestaurant(vector<string>& v1, vector<string>& v2)
    {
        unordered_map<string,int> mp;
        for(int i=0;i<v1.size();i++)
        {
            mp[v1[i]]=i;
        }
        vector<string> res;
        int index_sum=INT_MAX;
        for(int i=0;i<v2.size();i++)
        {
            if(mp.find(v2[i]) != mp.end())
            {
                if(mp[v2[i]]+i < index_sum)
                {
                    index_sum=mp[v2[i]]+i;
                    res.clear();
                    res.push_back(v2[i]);
                }
                else
                {
                    if(mp[v2[i]]+i==index_sum)
                    {
                        res.push_back(v2[i]);
                    }
                }
            }
        }
       return res; 
    }
};