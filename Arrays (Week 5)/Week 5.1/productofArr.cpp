// Calculate the product of all the elements in the given array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   

    int prod = 1;
    for(int i=0;i<n;i++){
        prod*=arr[i];
    }

    cout<<"Product: "<<prod<<endl;

    return 0;
}