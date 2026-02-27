//Next Alphabetical Character
/*
Example 1:
Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
*/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size()-1;
        char ans;
        if(letters[e] <= target) return letters[0];
        while(s<=e){
            int m=s+(e-s)/2;
            if(target<letters[m]){
                ans = letters[m];
                e=m-1;
            }else if(target>=letters[m]) s=m+1;
        }
        return ans;    
    }
};