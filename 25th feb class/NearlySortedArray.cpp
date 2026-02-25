#include <iostream>
using namespace std;
#include <vector>

int SearchNearlySortedArray(int arr[],int target, int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int m=int(s+(e-s)/2);
        if(arr[m]==target) ans=m;
        if(arr[m+1]==target) ans=m+1;
        if(arr[m-1]==target) ans=m-1;
        if(arr[m]>target) e=m-2;
        else{
            s=m+2;
        }
    }
    return ans;
}
int main(){
    int size;
    cout<< "Enter the size of array: ";
    cin>> size;
    int arr[size];
    cout<< "Enter the elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int x;
    cout << "Enter your target value: ";
    cin >> x;
    cout << SearchNearlySortedArray(arr,x,size);
}