#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){  
            continue; //will skip iteration when number is even
        }
        cout<<i<<" ";
    }
    return 0;
}