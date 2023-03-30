#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i=2;
    while(i<=n-1){
        if(n%i==0){
            cout<<n<<" is a composit number"<<endl;
            break;
        }
        i++;
    }  
    return 0;
}