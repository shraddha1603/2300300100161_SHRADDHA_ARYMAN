#include<iostream>
using namespace std;
int divide(int Dividend, int Divisor){
    int s=0;
    int e=Dividend;
    int ans=0;
    while(s<=e){
        int m= (s+(e-s)/2);
        if(m*Divisor==Dividend) ans=m;
        if(m*Divisor<Dividend){
            ans=m;
            s=m+1;
        }else{
            e=m-1;
        }
    }return ans;
}
int main(){
    cout<<divide(6,3);
}