// Write a C++ program to find the largest element of a given 2D array of integers.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int max = INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
        cout<<endl;
    }

    cout<<"Maximum is "<<max<<endl;

    return 0;
}