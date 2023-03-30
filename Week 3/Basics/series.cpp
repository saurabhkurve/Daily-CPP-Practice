//1-2+3-4+5....n

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum = sum + i;
    //     }else if(i%2==0){
    //         sum = sum - i;
    //     }
    // }
    if(n%2==0) {
        sum = -n/2;
    }else{
        sum = -n/2 + n;
    }
    cout<<sum<<endl;
    
    return 0;
}