class Solution {
public:
    bool ispal(string s, int low,int high)
    {
        while(low < high && s[low]==s[high])
        {
            low++;
            high--;
        }
        return low>=high;
    }
    bool validPalindrome(string s)
    {
        
        int low=0;
        int high=s.length()-1;
        while(low < high && s[low]==s[high])
        {
            low++;
            high--;
        }
        return ispal(s,low+1,high) || ispal(s,low,high-1);
    }
};