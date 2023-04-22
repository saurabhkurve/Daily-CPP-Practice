//  Write a program to print the row number having the maximum sum in a given matrix.


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
    
    int max_sum = INT_MIN;
    int idx=-1;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        if(sum>max_sum){
            max_sum = sum;
            idx = i;
        }
    }

    cout<<"Index having large sum is "<<idx<<endl;
    cout<<"Largest sum is "<<max_sum<<endl;
    return 0;
}