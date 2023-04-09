#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // int a;
    // int b;
    // cin>>a>>b;

    // int *p1 = &a;
    // int *p2 = &b;

    // cout<<(*p1 + *p2)<<endl;

    int a;
    int b;
    int *p1 = &a;
    int *p2 = &b;
    cin>>*p1>>*p2;
    int sum = *p1+*p2;
    int sum1 = a+b;
    cout<<sum<<endl;
    cout<<sum1<<endl;
    return 0;
}