#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[][3]={1,2,3,4,5,66,7,8,9};

    int max = INT_MIN;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
        }
    }

    cout<<"Max is "<<max<<endl;
    return 0;
}