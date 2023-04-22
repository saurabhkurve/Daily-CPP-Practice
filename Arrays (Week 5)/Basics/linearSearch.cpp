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
    //checkmark
    bool flag = false;;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            // cout<<"Element is present at "<<i<<" index."<<endl;
            flag = true;
        }
    }
    if (flag == true) cout<<"Element is found!"<<endl;
    else cout<<"Element is not found!"<<endl;
    return 0;
}