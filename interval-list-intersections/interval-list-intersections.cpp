class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& v1, vector<vector<int>>& v2)
    {
        vector<vector<int>> ans;
        int i=0;
        int j=0;
        
        int N = v1.size();
        int M = v2.size();
        
        while(i < N && j < M)
        {
            int start = max(v1[i][0],v2[j][0]);
            int end = min(v1[i][1],v2[j][1]);
            
            if(start <= end)
            {
                ans.push_back(vector<int> {start,end});
            }
            if(v1[i][1] > v2[j][1])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};