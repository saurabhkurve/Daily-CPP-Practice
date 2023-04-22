// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={7,2,32,5,20};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sume,sumo;
    sume=sumo=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
            sume+=arr[i];
        }else{
            sumo+=arr[i];
        }
    }   
    cout<<"Difference : "<<abs(sume-sumo)<<endl;
    return 0;
}