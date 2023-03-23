// Find the output for this code. Let input:- 2 3 6
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter first number: "<<endl;
    cin>>x;
    int y,m;
    cout<<"Enter second number and value for taking modulus: "<<endl;
    cin>>y>>m;
    int Z = (x*y)%m;

    cout<<"Output is : "<<Z<<endl;

    return 0;
}