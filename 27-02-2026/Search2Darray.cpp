#include <iostream>
#include <vector>
using namespace std;

bool BinarySearch(vector<int> arr, int target){
    int s, e,m;
    s=0;
    e=arr.size()-1;
    while(s<=e){
        m=int(s+(e-s)/2);
        if(arr[m]==target){
            return true;
        }
        else if(arr[m]<target){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }

 }
 int main(){
    int r,c,i=0,j=0,t,n,m,s,e,mid,row,col;
    
    cout<<"enter number of rows of matrix:"<<endl;
    cin>>r;
    cout<<"enter number of columns of matrix:"<<endl;
    cin>>c;
    cout<<"enter the element to be found:"<<endl;
    cin>>t;
    //taking matrix 
    vector<vector<int>> mat(r,vector<int>(c));
    //reading the matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"enter element:"<<endl;
            cin>>mat[i][j];
        }
    }
    //  //brute force
    // for(i=0;i<r;i++){
    //     for(j=0;j<c;j++){
    //         if (mat[i][j]==t){
    //             return true;
    //         }
    //         else{
    //             return false;
    //         }
    //     }
    // }
    //better
    for(i=0;i<r;i++){
        // finding the row which can contain the target and then converting it row to single array and then applyiing BS
        if(mat[i][0]<=t && t<=mat[i][c-1]){
           if(BinarySearch(mat[i],t)){
            cout<<"element found"<<endl;
           }
           else{
            cout<<"element not found"<<endl;
           }
        }
    }
    //optimal 
    n=mat.size();
    m=mat[0].size();
    s=0;
    e=n*m-1;
    while(s<=e){
        //assuming the matrix into one d array so we convert the index into row,col pair by the formula
        mid=int(s+(e-s)/2);
        row=mid/m;
        col=mid%m;
        if(mat[row][col]==t){
            return true;
        }
        else if(mat[row][col]<t){
            s=mid+1;
        }
        else if(mat[row][col]>t){
            e=mid-1;
        }
        else{
            return false;
        }
    }
    return 0;
 }