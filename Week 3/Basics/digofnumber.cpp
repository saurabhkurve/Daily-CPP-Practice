#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,r,digit=0,sum=0,sum1=0;
    cin>>n;
    //int i=0;
    int temp = n;
    while(n!=0){
        r = n%10;
        n = n/10;
        digit++;  //count of digits
        sum = sum *10 + r;  // reverse digits 
        sum1=sum1+r;  //sum of digits
    }
    if(temp==0) cout<<1<<endl;
    else cout<<"Count of digits: "<<digit<<endl;

    cout<<"Reverse: "<<sum<<endl<<"Sum of Digit: "<<sum1<<endl;

    return 0;
}