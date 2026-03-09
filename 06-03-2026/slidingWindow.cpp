#include<iostream>
using namespace std;

int solve(int arr[],int size,int k){
    int MaxSum = 0;
    for(int i=0;i<k;i++){
        MaxSum+=arr[i];
    }
    for(int i=0;i<size-k;i++){
        int curr = MaxSum-arr[i]+arr[k];
        k++;
        if(curr>MaxSum) MaxSum = curr;
  }
  return MaxSum;
}

int main(){
   int size ;
    cout<<"Enter Size of Array \n";
    cin>>size;
    int arr[size];
    cout<<"Enter Array:- ";
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    int k ;
    cout<<"Enter size of window:- ";
    cin>>k;
    cout<<solve(arr,size,k);
}