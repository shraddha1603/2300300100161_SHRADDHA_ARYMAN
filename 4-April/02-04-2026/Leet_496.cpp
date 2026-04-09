//Next Greater Element-1

/*
Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
*/

//Brute force
class Solution {
private:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> ans;
        for(int i = n-1 ; i>=0;i--){
            while(!st.empty() && arr[i]>=st.top()) st.pop();
            if(st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nextLargerElement(nums2));
        vector<int> ans2;
        for(int a:nums1){
            for(int j=0;j<nums2.size();j++){
                if(a==nums2[j]) {ans2.push_back(ans[j]); break;}
            }
        }
        return ans2;
    }
};

//Optimal
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int, int> ng;
     stack<int> st;
     for(int a:nums2){
        while(!st.empty() && st.top()<a){
            ng[st.top()] = a;
            st.pop();
        }
        st.push(a);
     }   
     vector<int> res;
     for(int b: nums1){
        res.push_back( ng.count(b) ? ng[b]  : -1);
     }
     return res;
    }
};