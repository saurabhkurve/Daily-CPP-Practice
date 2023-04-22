#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,2,1,3,45,5};

    int *ptr = arr;
    // cout<<ptr<<endl;
    // int *ptr2 = &arr[0];
    // cout<<ptr2<<endl;
    // cout<<ptr[0]<<endl;
    // for(int i=0;i<6;i++){
    //     // cout<<arr[i]<<" ";
    //         cout<<ptr[i]<<" ";
    // }

    for(int i=0;i<6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr = arr;  //ptr is now pointing to first element.

    *ptr=90;  //ptr[0]=90
    ptr++;   //ptr is pointing to 2nd element
    *ptr=95; //ptr[1]=95
    ptr--;  //ptr is pointing to first element.

    for(int i=0;i<6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr = arr;
    return 0;
}