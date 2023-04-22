// Find the second largest element in the given Array in one pass.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {23,45,43,45,67,65,43};

    int max1=INT_MIN;
    int max2=INT_MIN;

    for(int i=0;i<7;i++){
        if(arr[i]>max1){
            max2=max1;
            max1 = arr[i];
        }else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    }

    cout<<"First largest is: "<<max1<<endl;
    cout<<"Second largest is: "<<max2<<endl;
    return 0;
}