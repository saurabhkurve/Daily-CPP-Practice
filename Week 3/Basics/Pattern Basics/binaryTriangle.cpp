// 1
// 0 1
// 1 0 1
// 0 1 0 1
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int a = 6; //you can take any number
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0) a = 1;   //for  odd row
    //     else a = 0;     //for even row
    //     for(int j=1;j<=i;j++){
    //         cout<<a<<" ";

    //         //flipping
    //         if(a==1) a = 0;
    //         else a = 1; 
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2 == 0){ //sum of both odd numbers or even numbers is always even.
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}