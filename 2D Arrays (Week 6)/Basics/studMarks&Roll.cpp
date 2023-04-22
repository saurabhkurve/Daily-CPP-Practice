#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[4][2];

    //store row wise roll and marks
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //store column wise roll and marks
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}