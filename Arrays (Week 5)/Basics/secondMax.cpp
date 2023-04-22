#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the a size of an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  

    int maxi = INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }

    int secondMaxi = INT_MIN;

    for(int i=0;i<n;i++){
        if((arr[i] != maxi) && (arr[i]>secondMaxi) ){
            secondMaxi = arr[i];
        }
    }

    cout<<"Largest is "<<maxi<<endl;
    cout<<"Second Largest is "<<secondMaxi<<endl;
    return 0;
}