// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
/*
Example 1:

Input: n = 5, bad = 4
Output: 4
Explanation:
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
Then 4 is the first bad version.
Example 2:

Input: n = 1, bad = 1
Output: 1
*/

class Solution {
public:
    int firstBadVersion(int n) {
      int s=1;
      int e=n;
      while(s<e){
        int mid=s+(e-s)/2;
        bool bad=isBadVersion(mid);
        if(bad==true){
            e=mid;
        }
        else{
            s=mid+1;
        }
      }
      return s;
    }
};