// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;

    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    for(int j=m-1;j>=0;j--){
        // for(int i=n-1;i>=0;i--){
        //     cout<<arr[i][j]<<" "; 
        // }
         for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}