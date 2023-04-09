#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[7];
    // arr[0] = 4;
    // for(auto ele:arr){
    //     cout<<ele<<endl;    
    // }   
    
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}