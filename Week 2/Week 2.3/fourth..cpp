#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    int start,diff;

    cout<<"Enter the number to get A.P : "<<endl;
    cin>>n;
    start = 4;
    diff = 3;

    while(n--){
        cout<<start<<" ";
        start+=diff;
    }

    
    return 0;
}