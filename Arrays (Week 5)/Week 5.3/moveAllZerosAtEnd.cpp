//Move all zeros to the end of the array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = { 6,0,5,2,0 };
    int size = sizeof(arr)/sizeof(arr[0]);

    int j=0;  //keep track of 0

    for(int i=0;i<size;i++){
        if(arr[i] !=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
   
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}