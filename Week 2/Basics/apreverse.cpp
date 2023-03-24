//AP in reverse 100,97,94....
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=n;i>0;){
        cout<<i<<endl;
        i=i-3;
    }
    return 0;
}
