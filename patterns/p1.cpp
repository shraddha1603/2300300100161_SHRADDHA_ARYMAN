#include <iostream>
using namespace std;
/*
* * * *
* * * *
* * * *
* * * *
*/
int main(){
    int i,j,x,y;
    cout<< "Enter number of rows";
    cin >> x;
    cout<< "Enter number of columns";
    cin>> y;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cout<< "*"<< " ";
        }cout<< endl;
    }
    return 0;
}