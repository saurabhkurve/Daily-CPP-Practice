#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=2*i-1;j+=2){
    //             cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    
     for(int i=1;i<=n;i++){
        int temp = 1;
        for(int j=1;j<=i;j++){
                cout<<temp<<" ";
                temp +=2;
        }
        cout<<endl;
    }
    return 0;
}