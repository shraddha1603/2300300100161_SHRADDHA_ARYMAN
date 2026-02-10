class Solution {
public:
    int reverse(int x) {
        long long int a = 0;
        int mod = 0;
        while(x!=0){
            mod = x%10;
            a = (a*10)+mod;
            x/=10;
        }
        if(a > INT_MAX || a < INT_MIN) return 0;
         return (int)a;
    }
};