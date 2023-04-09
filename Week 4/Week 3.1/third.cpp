// Q3: Given two numbers a and b, write a function to print all odd numbers between them.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printOddNumbers(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    printOddNumbers(a,b);   
    return 0;
}