#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[][3]={8,2,3,4,5,66,7,8,9};

    int min = INT_MAX;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] < min){
                min=arr[i][j];
            }
        }
    }

    cout<<"Min is "<<min<<endl;
    return 0;
}