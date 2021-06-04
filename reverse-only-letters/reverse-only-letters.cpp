class Solution {
public:
    string reverseOnlyLetters(string s)
    {
        stack<int> st;
        
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            {
                st.push(s[i]);
            }
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                s[i]=st.top();
                st.pop();
            }
        }
       return s; 
    }
};