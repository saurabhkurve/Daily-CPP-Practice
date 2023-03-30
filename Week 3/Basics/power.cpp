#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int base,exponent;
    cout<<"Enter base and exponent: "<<endl;
    cin>>base>>exponent;
    bool flag = true; //power is positive
    if(exponent<0){
        flag = false;  //negative power
        exponent = -exponent;
    }
    float power = 1;
    for(int i=1;i<=exponent;i++){
        power *= base;
    }
    if(flag == false){
        power = 1/power;
        exponent = -exponent;
    }
    if (base==0 && exponent==0){
        cout<<"Not defined."<<endl;
    }else{
         cout<<power<<endl;
    }
   
    return 0;
}