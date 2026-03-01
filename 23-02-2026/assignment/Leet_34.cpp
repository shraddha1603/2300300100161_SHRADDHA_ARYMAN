//Finf first and last position of element in Sorted array
/*
Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]
*/
class Solution {
public:
    int first (vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(nums[m]==target){
                e=m-1;
                ans=m;
            }
            else if(nums[m]>target) e=m-1;
            else  s=m+1;
        }
        return ans;
    }
    int last (vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
          int  m=s+(e-s)/2;
            if(nums[m]==target){
                s=m+1;
                ans=m;
            }
            else if(nums[m]>target) e=m-1;
            else s=m+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = first(nums,target);
        int j = last(nums,target);
        return {i,j};
    };
};