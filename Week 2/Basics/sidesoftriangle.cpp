#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter sides of a triangle"<<endl;
    cin>>a>>b>>c;

    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<a<<","<<b<<","<<c<<" can be the sides of a triangle"<<endl;
    }else{
        cout<<"Invalid triangle"<<endl;
    }
    return 0;
}