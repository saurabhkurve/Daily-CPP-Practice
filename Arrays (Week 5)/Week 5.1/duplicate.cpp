// Given an array, predict if the array contains duplicates or not.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,2,4,5};

    bool flag = false;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                flag = true;
                cout<<"Duplicate element is: "<<arr[i]<<endl;;
                break;
            }
        }
    }   
    if(flag == false) cout<<"Duplicate elements are not found in given array."<<endl;
    return 0;
}