// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 4, 32, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(i%2==0){
            arr[i]+=10;
        }else{
            arr[i]*=2;
        }
    }

    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}