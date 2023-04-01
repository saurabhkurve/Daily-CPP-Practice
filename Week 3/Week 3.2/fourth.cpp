// 1
// AB
// 123
// ABCD
// 12345

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                cout<<j<<" ";
            }else{
                cout<<char(64+j)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}