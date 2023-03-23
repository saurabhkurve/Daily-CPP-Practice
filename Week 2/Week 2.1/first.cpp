// Take 2 integers input and print the greatest of them
// Input 1: a = 5 b = 7
// Output 1: second number 7 is the largest

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greatest."<<endl;
    }else{
        cout<<b<<" is greatest,"<<endl;
    }
    return 0;
}