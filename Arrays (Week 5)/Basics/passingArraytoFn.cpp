#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
 
void change(int arr[]){ 
    arr[0] = 100;
    return;
} 
int main(){
    int arr[] = {1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    change(arr);
    printArray(arr,size);
    return 0;
}