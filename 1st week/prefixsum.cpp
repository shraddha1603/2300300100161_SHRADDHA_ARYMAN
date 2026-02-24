#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: "; 
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    cout << "Prefix Sum Array: ";
    for (int i = 0; i < n; i++) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;
    return 0;
}