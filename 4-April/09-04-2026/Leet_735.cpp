//Asteroid Collision
/*
Example 1:
Input: asteroids = [5,10,-5]
Output: [5,10]
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.

Example 2:
Input: asteroids = [8,-8]
Output: []
Explanation: The 8 and -8 collide exploding each other.

Example 3:
Input: asteroids = [10,2,-5]
Output: [10]
Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.

Example 4:
Input: asteroids = [3,5,-6,2,-1,4]​​​​​​​
Output: [-6,2,4]
Explanation: The asteroid -6 makes the asteroid 3 and 5 explode, and then continues going left. On the other side, the asteroid 2 makes the asteroid -1 explode and then continues going right, without reaching asteroid 4.
*/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        
        for (int ast : asteroids) {
            bool destroyed = false;
            
            while (!st.empty() && ast < 0 && st.back() > 0) {
                if (abs(st.back()) < abs(ast)) {
                    st.pop_back(); // stack asteroid destroyed
                } 
                else if (abs(st.back()) == abs(ast)) {
                    st.pop_back(); // both destroyed
                    destroyed = true;
                    break;
                } 
                else {
                    destroyed = true; // current asteroid destroyed
                    break;
                }
            }
            
            if (!destroyed) {
                st.push_back(ast);
            }
        }
        
        return st;
    }
};