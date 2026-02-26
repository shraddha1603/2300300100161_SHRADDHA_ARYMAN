#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s,e,m,ans;
        s=0;
        e=nums.size()-1;
        while(s<=e){
            if(nums[s]<=nums[e]){
                return nums[s];
            }
            m=int(s+(e-s)/2);
            if(nums[m]>nums[m+1] && m+1<=e){
                return nums[m+1]; 
            }
            if(nums[m]<nums[m-1] && m-1>=s){
                return nums[m]; 
            }
            if(nums[s]>nums[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
            if(s==e){
                return s;
            }
        }
    return 0;
    }
    
};