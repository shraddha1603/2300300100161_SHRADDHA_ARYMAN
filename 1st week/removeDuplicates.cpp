#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
        return i+1;
    }
}