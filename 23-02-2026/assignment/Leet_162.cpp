//Find peak element
/*
Example 1:
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

Example 2:
Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]<nums[mid+1]){
                s=mid+1;
            }else{
                e=mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
};