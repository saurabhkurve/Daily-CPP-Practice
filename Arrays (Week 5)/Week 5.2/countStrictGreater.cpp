//Count the number of elements strictly greater than x.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to find greater than that element in the given array: "<<endl;
    int x;
    cin>>x;
    int count = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }   
    cout<<"Count: "<<count<<endl;
    return 0;
}