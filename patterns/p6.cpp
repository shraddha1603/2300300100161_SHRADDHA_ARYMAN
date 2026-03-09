#include <iostream>
using namespace std;
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
int main(){
    int i,j,n;
    cout<< "Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j ;
        }
        cout<< endl;
    }
}