//Search in Rotated Sorted array
/*
Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

Example 3:
Input: nums = [1], target = 0
Output: -1
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e) {
        int m = s + (e - s) / 2;

        if (nums[m] == target)
            return m;
        if (nums[s] <= nums[m]) {
            if (nums[s] <= target && target < nums[m])
                e = m - 1;
            else
                s = m + 1;
        }
        else {
            if (nums[m] < target && target <= nums[e])
                s = m + 1;
            else
                e = m - 1;
        }
    }

    return -1;
}
};