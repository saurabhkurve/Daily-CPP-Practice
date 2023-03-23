#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Number is divisible by 5 and 3"<<endl;
        }else{
            cout<<"Number is divisible by 5 but not by 3"<<endl;
        }
    }else{
        cout<<"Not matching"<<endl;
    }
    return 0;
}