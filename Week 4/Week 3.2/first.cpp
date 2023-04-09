// Q1 : Write a program to find the product of two numbers using pointers

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// int product (int &a,int &b){
//     int res = a+b;
//     cout<<res<<endl;
// }

int main(){
    int a,b;
    cin>>a>>b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    int ans;
    int *res = &ans;

    *res = (*ptr1)*(*ptr2);

    cout<<(*res)<<endl;

    return 0;
}