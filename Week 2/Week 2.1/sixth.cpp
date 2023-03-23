#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter marks for 3 subjects: "<<endl;
    cin>>a>>b>>c;
    
    if(a<=b && a<=c){
        cout<<"a is the least number"<<endl;
    }else if(b<=c && b<=a){
        cout<<"b is the least number"<<endl;
    }else{
        cout<<"c is the least number"<<endl;
    }
    return 0;
}