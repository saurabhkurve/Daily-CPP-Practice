// Find the output for this code. Let input:- 2 3

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;
    return 0;
}