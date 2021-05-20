class Solution {
public:
    double fastpower(double x,long long N)
    {
        if(N==0)
        {
            return 1.0;
        }
        double half=fastpower(x,N/2);\
        if(N%2==0)
        {
            return half*half;
        }
        else
        {
            return half*half*x;
        }
    }
    
    double myPow(double x, long long n) 
    {
        long long N = n;
        if(N<0)
        {
            x=1/x;
            N=-N;
        }
        return fastpower(x,N);
    }
};