#include<iostream>
using namespace std;
int Search(int arr[], int target, int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(target == arr[mid]) return mid;
        else if(arr[mid]>target) e=mid-1;
        else s=mid+1;
        
    }
    return -1;
}
 int solve(int nums[], int target, int size) {
    int s = 0;
    int e = size - 1;

    while (s <= e) {
        int m = s + (e - s) / 2;

        if (nums[m] == target)
            return m;
        if (nums[s] <= nums[m]) {
            if (nums[s] <= target && target < nums[m])
                e = m - 1;
            else
                s = m + 1;
        }
        else {
            if (nums[m] < target && target <= nums[e])
                s = m + 1;
            else
                e = m - 1;
        }
    }

    return -1;
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
    cout << Search(arr,x,size);
    cout << solve(arr,x,size);
}