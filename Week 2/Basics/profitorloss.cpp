#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int cp,sp;
    cout<<"Enter cost price : "<<endl;
    cin>>cp;
    cout<<"Enter selling price : "<<endl;
    cin>>sp;
    if(sp>cp){
        //cout<<"PROFIT"<<endl;
        cout<<"Profit : "<<(sp-cp)<<endl;
    }else if(sp<cp){
        //cout<<"LOSS"<<endl;
        cout<<"Loss: "<<(cp-sp)<<endl;
    }else{
        cout<<"No Profit,No Loss "<<endl;
    }
    return 0;
}