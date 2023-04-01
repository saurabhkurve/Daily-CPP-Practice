//     1
//    121
//   12321
//  1234321   

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        // int a = i;
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
            // a--;
        }
        for(int q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
    }   
    return 0;
}