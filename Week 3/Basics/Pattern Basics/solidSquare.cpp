#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    //Solid Square
    // int row;
    // cout<<"Enter rows: "<<endl;
    // cin>>row;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<row;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //Number square
    int row;
    cout<<"Enter rows: "<<endl;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    //Alphabet values
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}