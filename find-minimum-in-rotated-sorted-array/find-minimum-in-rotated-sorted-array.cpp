class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        if(nums.size()==1)return nums[0];
        
        int low=0;
        int high=nums.size()-1;
        if(nums[0]<nums[high])
        {
            return nums[0];
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            else if(nums[mid]<nums[mid-1])
            {
                return nums[mid];
            }
            if(nums[mid]>nums[0])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
       return -1; 
    }
};