class Solution {
public:
    int minSteps(string s, string t)
    {
        int n=s.size();
        int prefix1[255]={0};
        int prefix2[255]={0};
        int prefix3[255]={0};
        for(int i=0;i<s.size();i++)
        {
            prefix1[s[i]-'a']++;
        }
        
        for(int i=0;i<t.size();i++)
        {
            prefix2[t[i]-'a']++;
        }
        
        for(int i=0;i<255;i++)
        {
            prefix3[i]=prefix1[i]-prefix2[i];
        }
        int c=0;
        for(int i = 0;i < 255;i++)
        {
            if(prefix3[i] > 0)
            {
                c+=prefix3[i];
            }
        }
       return c; 
    }
};