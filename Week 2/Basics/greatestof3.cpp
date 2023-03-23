#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers "<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a<<" is greater than rest"<<endl;
    }else if(b>a && b>c){
        cout<<b<<" is greater than rest"<<endl;
    }else if(c>a && c>b){
        cout<<c<<" is larger than rest"<<endl;
    }else{
        cout<<"two or more values are similar"<<endl;
    }
    return 0;
}