// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void square(int n){
    int sq = 1;
    for(int i=1;i<=n;i++){
        sq = i*i;
        cout<<sq<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    square(n);
    
    return 0;
}