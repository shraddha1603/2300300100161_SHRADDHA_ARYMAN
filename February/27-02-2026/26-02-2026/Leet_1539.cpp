//Kth Missing Positive Number
/*
Example 1:
Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=1;
        int i=0;
        while(k){
            if(i<arr.size() && count==arr[i]){
                i++;
            }else{
                k--;
            }
        count++;
        }
        return count-1;
    }
};