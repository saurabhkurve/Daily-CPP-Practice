#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"The number is divisible by 3 or 5"<<endl;
    }else{
        cout<<"The number not is divisible by 3 or 5"<<endl;
    }
    return 0;
}