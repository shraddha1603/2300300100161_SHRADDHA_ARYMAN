//Next Smaller Element: gfg
/*
Example
Input: arr[] = [1, 3, 2, 4]
Output: [3, 4, 4, -1]
Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4, since it doesn't exist, it is -1.
*/

//Using Stack

class Solution {
  public:
    vector<int> nextSmallerElement(vector<int>& arr) {
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
};

//Without using stack

class Solution {
  public:
    vector<int> nextSmallerElement(vector<int>& arr) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int a =-1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]>arr[j]){
                    a = arr[j];
                    break;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};
