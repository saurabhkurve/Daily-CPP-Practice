// Find the factorial of a large number.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int largeFactorial(vector<int>&v,int val,int sz){
    int carry = 0;

    for(int i=0;i<sz;i++){
        int product = v[i]*val+carry;  //2  6  24 20  12
        v[i] = product%10;   //2  6  4  0  2
        carry = product/10;  //0  0  2  2  1
    }
    while(carry){
        v[sz]=carry%10;   //  4 2  0 2 1
        carry /=10;      //0
        sz++;     //3
    }
    return sz;
}

int main(){
    int n;
    cout<<"Enter the number to find its factorial: "<<endl; //5
    cin>>n;

    vector<int>v(500,0);

    int sz = 1;
    v[0] = 1;

    //return size of an array required to store large factorial number 
    for(int i=2;i<=n;i++){
        sz = largeFactorial(v,i,sz);
    }

    for(int i=sz-1;i>=0;i--) cout<<v[i];  //021 -->120

    return 0;
}   