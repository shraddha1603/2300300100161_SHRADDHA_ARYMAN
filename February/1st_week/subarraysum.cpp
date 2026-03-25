#include <iostream>
using namespace std;
void rangesum(int i,int j){ 

}
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
    int L,R,Q;
    cout << "Enter the number of queries ";
    cin >> Q;
    int arr[Q] 
}