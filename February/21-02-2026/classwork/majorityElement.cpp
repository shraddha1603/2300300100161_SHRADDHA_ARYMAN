class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int vote=0;
        for(int x:nums){
            if(vote==0) candidate=x;
            if(candidate == x) vote++;
            else vote--;
        }
        return candidate;
    }
};