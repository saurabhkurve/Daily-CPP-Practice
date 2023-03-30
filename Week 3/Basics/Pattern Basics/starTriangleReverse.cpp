#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    // for(int i=1;i<=row;i++){
    //     for(int j=row;j>=i;j--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //no. of stars = n+1-i
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row+1-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}