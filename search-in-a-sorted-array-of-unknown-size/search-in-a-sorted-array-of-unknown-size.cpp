/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target)
    {
        if(reader.get(0) == target) return 0;
        int left=0;
        int right=1;
        while(reader.get(right) < target)
        {
            left=right;
            right<<=1;
        }
        
        while(left<=right)
        {
            int pivot=left + (right-left)/2;
            int num = reader.get(pivot);
            if(num == target) return pivot;
            else if(num > target)
            {
                right=pivot-1;
            }
            else
            {
                left=pivot+1;
            }
        }
       return -1; 
    }
};