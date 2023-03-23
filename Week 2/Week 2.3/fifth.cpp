// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
     int n;
    int start,r;

    cout<<"Enter the number to get A.P : "<<endl;
    cin>>n;
    start = 3;
    r = 4;

    while(n--){
        cout<<start<<" ";
        start*=r;
    }

    return 0;
}