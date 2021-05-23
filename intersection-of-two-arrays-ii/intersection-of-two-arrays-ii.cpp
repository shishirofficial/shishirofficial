class Solution {
public:
    int bin(vector<int> &nums2,int low,int high,int value)
    {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums2[mid]==value)
            {
                return mid;
            }
            if(nums2[mid]>value)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return -1;
    }
    
    
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        if(nums2.size()<nums1.size())
        {
            return intersect(nums2,nums1);
        }
        vector<int> ans;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        for(int i=0;i<nums1.size();i++)
        {
            int curr=nums1[i];
            
            int index=bin(nums2,0,nums2.size()-1,curr);
            if(index != -1)
            {
                ans.push_back(curr);
                nums2.erase(nums2.begin()+index);
            }
            
        }
        return ans;
    }
};