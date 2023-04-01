#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     //for spaces
    //     for(int k=1;k<=n-i;k++){
    //         cout<<" "<<" ";
    //     }

    //     //For odd number of stars 2*i-1 = 2*1-1=1 2*2-1=3 2*3-1=5 2*4-1=7 
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    //with the help of nsp an nst
    //nsp - number of spaces
    ///nst - number of stars

    int nst = 1;
    int nsp = n-1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;

        for(int k=1;k<=nst;k++){
            cout<<k;
        }
        nst+=2;
        cout<<endl;
    }
    return 0;
}