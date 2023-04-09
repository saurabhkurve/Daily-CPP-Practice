#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// int fact (int n){
//     int f = 1;
//     for(int i=1;i<=n;i++){
//         f *= i;
//     }
//     return f;
// }
// int combination(int n,int r){
//     int ncr = fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        int current = 1;
        for(int j=0;j<=i;j++){
            cout<<current<<" ";
            current = current * (i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}