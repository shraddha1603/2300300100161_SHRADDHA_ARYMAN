//Valid Parentheses

/*
Example 1:
Input: s = "([])"
Output: true

Example 2:
Input: s = "([)]"
Output: false
*/

class Solution {
public:
    bool isValid(string s) {
        if(s.length() %2 != 0) return false;
        stack<char> st;
        for(char ch:s){
            if(ch=='(' || ch=='{' || ch=='[') st.push(ch);
            else if(!st.empty() && (
                    (ch==')' && st.top() =='(') ||
                    (ch=='}' && st.top() =='{') ||
                    (ch==']' && st.top() =='[')))
                    st.pop();
                else return false;
        }
        return st.empty();
    }
};