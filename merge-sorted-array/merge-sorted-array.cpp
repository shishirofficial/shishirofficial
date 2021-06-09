class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int temp[m+n];
        int a=0;
        int i=0;
        int j=0;
        
        while(i < m && j < n)
        {
            if(nums1[i] <= nums2[j])
            {
                temp[a++]=nums1[i];
                i++;
            }
            else
            {
                temp[a++]=nums2[j];
                j++;
            }
        }
        
        // for(int i=0;i<m+n;i++)
        // {
        //     cout<<temp[i]<<" ";
        // }
        while(i < m)
        {
            temp[a++]=nums1[i];
            i++;
        }
        while(j < n)
        {
            temp[a++]=nums2[j];
            j++;
        }
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=temp[i];
        }
        
    }
};