#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//HCF(x,y) <= min(x,y)

// int gcd(int a,int b){
//     int hcf = 1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){  //i is a common factor
//             hcf = i;
//         }
//     }
//     return hcf;
// }

//better than above code
int gcd(int a,int b){
    int hcf = 1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){  //i is a common factor
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b);   
    return 0;
}