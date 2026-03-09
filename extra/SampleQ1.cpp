#include<iostream>
using namespace std;

const long long MOD = 1000000007;

long long solve(long long arr[], int size, int q){
    long long sum = 0;

    while(q){
        int l, r;
        long long x, y;

        cin >> l >> r >> x >> y;

        for(int i = 0; i <= r - l; i++){
            arr[l + i] = x + (i * y);
        }

        q--;
    }

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return sum % MOD;
}

int main(){
    int size;
    cin >> size;
    long long arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int q;
    cin >> q;
    long long ans = solve(arr, size, q);
    cout << ans;
    return 0;
}