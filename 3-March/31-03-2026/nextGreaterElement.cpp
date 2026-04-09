//Next Greater Element(gfg)
/*
Example
Input: arr[] = [1, 3, 2, 4]
Output: [3, 4, 4, -1]
Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4, 
since it doesn't exist, it is -1.
*/
//Using array:Brute force

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int a =-1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    a = arr[j];
                    break;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};

//Stack:optimal 

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);   
        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] < arr[i]) {
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }

        return ans;
    }
};