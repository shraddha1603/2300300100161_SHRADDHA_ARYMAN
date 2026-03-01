//Container with most water
/*
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<j){
            int x = min(height[i],height[j]) * (j-i);
            if(x>ans) ans=x;
            else if(height[i]<=height[j]) i++;
            else j--;
        }
        return ans;
    }
};