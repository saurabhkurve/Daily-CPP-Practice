#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter key element to search: ";
    int x;
    cin>>x;
  
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Count : "<<count<<endl;
    return 0;
}