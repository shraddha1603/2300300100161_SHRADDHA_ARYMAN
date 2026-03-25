//KoKo Eating Bananas
/*
Example 1:
Input: piles = [3,6,7,11], h = 8
Output: 4

Example 2:
Input: piles = [30,11,23,4,20], h = 5
Output: 30

Example 3:
Input: piles = [30,11,23,4,20], h = 6
Output: 23
*/

class Solution {
public:
   long long hour(int k, vector<int>& piles){
        long long sum = 0;   
    for(int i = 0; i < piles.size(); i++){
        sum += (piles[i] + k - 1) / k;
    }

    return sum;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int i =1;
        int j  = *max_element(piles.begin(), piles.end());
        int ans;

        while(i<=j){
            int m = i + (j-i)/2;
            long long TH = hour(m,piles);
            if(TH <= h){
                j = m-1;
                ans = m;
            }
            else i = m+1;
           
        }
        return ans;
    }
};