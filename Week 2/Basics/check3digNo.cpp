#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Number is 3 digit"<<endl;
    }else{
        cout<<"Number is not 3 digit"<<endl;
    }
    return 0;
}