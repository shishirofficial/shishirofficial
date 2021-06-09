class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        
        vector<int> temp(n,0);
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                temp[a++]=nums[i];
            }
        }
        nums=temp;
        
    }
};