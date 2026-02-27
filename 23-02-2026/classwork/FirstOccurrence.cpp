#include <iostream>
using namespace std;
int solve(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(target<arr[mid]){
            e= mid-1;
        }
         else{
            s=mid+1;
        }
        mid =s +(e-s)/2;
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
    cout << solve(arr,size,x);
}