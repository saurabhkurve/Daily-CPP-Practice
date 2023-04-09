#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//with using third variable
// void swapping(int &a,int &b){
//     int temp = a;
//     a = b;
//     b = temp; 
//     return   
// }

//without using third variable
void swapping1(int &a,int &b){
    a = a+b;
    b = a-b;
    a = a-b;  
    return; 
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swaping: "<<a<<" "<<b<<endl;
    swapping1(a,b);
    cout<<"After swaping: "<<a<<" "<<b<<endl;
    return 0;
}