// 1
// 21
// 321
// 4321


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     int temp = i;
    //     for(int j=1;j<=i;j++){
    //         cout<<temp<<" ";
    //         temp--;
    //     }
    //     cout<<endl;
    // }

     for(int i=1;i<=n;i++){
        // int temp = i;
        for(int j=i;j>=1;j--){
            // cout<<temp<<" ";
            // temp--;
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}