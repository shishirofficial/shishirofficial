class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        vector<int> a(26);
        vector<int> ans;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a'] = i;
        }
        
        int j=0, anchor=0;
        for(int i=0;i<s.length();i++)
        {
            j = max(j,a[s[i]-'a']);
            if(i == j)
            {
                ans.push_back(j-anchor+1);
                anchor = i+1;
            }
        }
        
        return ans;
    }
};