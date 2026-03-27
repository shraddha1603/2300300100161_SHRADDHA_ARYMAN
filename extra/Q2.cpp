#include <bits/stdc++.h>
using namespace std;

int maxPerformers(int N, int C, vector<int> &coins) {
    sort(coins.begin(), coins.end());
    
    int count = 0;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        if (sum + coins[i] <= C) {
            sum += coins[i];
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> coins(N);
    for (int i = 0; i < N; i++) {
        cin >> coins[i];
    }

    cout << maxPerformers(N, C, coins);

    return 0;
}