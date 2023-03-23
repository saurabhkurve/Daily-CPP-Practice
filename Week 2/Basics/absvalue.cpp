#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    // if(n>0){
    //     cout<<n;
    // }else{
    //    cout<<-n;
    // }
    if(n<0){
        n = -n; // n = -(-2)
    }
    cout<<n;
    return 0;
}