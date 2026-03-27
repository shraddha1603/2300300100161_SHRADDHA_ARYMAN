#include <bits/stdc++.h>
using namespace std;

int maxLoot(int N, vector<pair<int, int>> &vaults) {
    sort(vaults.begin(), vaults.end());
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto &v : vaults) {
        pq.push(v.second);
        if (pq.size() > v.first) {
            pq.pop();
        }
    }

    int total = 0;
    while (!pq.empty()) {
        total += pq.top();
        pq.pop();
    }

    return total;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> vaults(N);
    for (int i = 0; i < N; i++) {
        cin >> vaults[i].first >> vaults[i].second;
    }

    cout << maxLoot(N, vaults);

    return 0;
}