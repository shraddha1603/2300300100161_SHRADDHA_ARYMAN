//Range Sum Query-Immutable
/*
Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
Output
[null, 1, -1, -3]

Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
*/

class NumArray {
public:
vector<int> sums;
    NumArray(vector<int>& nums) {
        sums.resize(nums.size()+1);
        sums[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            sums[i] = sums[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return sums[right];
        }else{
            return sums[right] - sums[left-1];
        }
    }
};