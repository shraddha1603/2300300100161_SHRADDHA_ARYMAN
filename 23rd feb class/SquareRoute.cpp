#include<iostream>
using namespace std;

int solve(int n){
    int s = 1;
    int e = n/2;
   
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        int sq = mid*mid;
        if(sq==n){
           return mid;
        }
        else if(n<sq){
            e=mid-1;
    }else{
        ans=mid;
        s= mid+1;
    }
}
return ans;
}

int main(){
    
    cout<<solve(37);
}