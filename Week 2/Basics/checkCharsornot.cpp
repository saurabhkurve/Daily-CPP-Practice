#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character :"<<endl;
    cin>>ch;
    if((int)ch>=97 && (int)ch<=122){
        cout<<"The character is lowercase alphabet"<<endl;
    }else if((int)ch>=65 && (int)ch<=90){
        cout<<"The character is uppercase alphabet"<<endl;
    }else{
        cout<<"Given character is not an alphabet"<<endl;
    }
    return 0;
}