class Solution {
public:
    bool isPerfectSquare(int num)
    {
        if(num < 2)
        {
            return true;
        }
        int left=2;
        int right=num/2;
        while(left <= right)
        {
            long long int x = left + (right-left)/2;
            long long int base_square=x*x;
            if(base_square == num)return true;
            if(base_square < num)
            {
                left=x+1;
            }
            else
            {
                right=x-1;
            }
        }
       return false; 
    }
};