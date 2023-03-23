// If the marks of A, B and C are input through the keyboard, write a program to determine the student 
// scoring the least marks.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter marks for 3 subjects: "<<endl;
    cin>>a>>b>>c;
    
    if(a<=b && a<=c){
        cout<<"a is the least number"<<endl;
    }else if(b<=c && b<=a){
        cout<<"b is the least number"<<endl;
    }else{
        cout<<"c is the least number"<<endl;
    }
    return 0;
}