#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,f1,f2,sum=0;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    f1 = 1;
    f2 = 1;
    
    for(int i=1;i<=n-2;i++){
        sum = f1+f2;
        f1 = f2;
        f2 = sum;
    }
    cout<<f2<<endl;
    return 0;
}