// WAP to find the largest three elements in the array.

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

    int max1,max2,max3;
    max1=max2=max3=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2 && arr[i]!=max1){
            max3 =max2;
            max2=arr[i];
        }else if(arr[i]>max3 && arr[i]!=max1 && arr[i]!=max2){
            max3=arr[i];
        }
    }
    cout<<"Max 1 :"<<max1<<endl;
    cout<<"Max 2 :"<<max2<<endl;
    cout<<"Max 3 :"<<max3<<endl;
    return 0;
}