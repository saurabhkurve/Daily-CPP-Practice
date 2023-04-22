// Check if the given array is sorted or not.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,4,5,6,7,8,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool flag = true;
    for(int i=1;i<size;i++){
        if(arr[i-1]>arr[i]){
            // cout<<"Array is not sorted"<<endl;
            // return 0;
            flag = false;
        }
    }

    // cout<<"Array is sorted"<<endl;

    if(flag){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }

    return 0;
}