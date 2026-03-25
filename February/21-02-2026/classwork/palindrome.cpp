#include <iostream>
using namespace std;
bool check(char arr[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i] != arr[j]) return false;
        i++;j--;
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the size of the array: "; 
    cin >> n;
    char arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   if(check(arr,n)) cout<<"Palindrome";
   else cout<<"not palindrome";
}