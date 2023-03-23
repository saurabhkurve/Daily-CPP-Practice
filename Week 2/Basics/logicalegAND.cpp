#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"Number is divisible by 3 & 5"<<endl;
    }else{
        cout<<"Number is not divisible by 3 & 5"<<endl;
    }
    return 0;
}