#include <iostream>
using namespace std;
/*
1
2 2
3 3 3 
4 4 4 4
5 5 5 5 5
*/
int main(){
    int i,j,n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << i;
        }
    cout << endl;
    }
}