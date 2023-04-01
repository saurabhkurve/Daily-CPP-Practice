// *
// ***
// *****
// ******
// *********

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        //For odd number of stars 2*i-1 = 2*1-1=1 2*2-1=3 2*3-1=5 2*4-1=7 
        for(int j=1;j<=2*i-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    return 0;
}