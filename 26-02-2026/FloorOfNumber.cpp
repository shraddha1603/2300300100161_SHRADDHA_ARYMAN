/*
Find the Floor of a Number in a Sorted Array
Given a sorted array and a value x, find the largest element ≤ x using Binary Search.
*/

#include <iostream>
using namespace std;
int solve(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]<=target) {
            ans = arr[m];
            s = m+1 ;
            }
        else e= m-1;
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