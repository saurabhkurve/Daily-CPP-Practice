// Find the minimum value out of all elements in the array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   

    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        // if(arr[i]<mini){
        //     mini = arr[i];
        // }
        mini=min(mini,arr[i]);
    }
    cout<<"Smallest element is: "<<mini<<endl;
    return 0;
}