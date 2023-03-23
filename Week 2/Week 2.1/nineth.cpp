//Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character"<<endl;
    cin>>ch;

    if(((int)ch>=65 && (int)ch<=90) || ((int)ch>=97&&(int)ch<=122)){  //if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        cout<<"This is an alphabet";
    }else if(int(ch)>=48 && (int)ch<=57){    //if(ch>='0' && ch<='9') 
        cout<<"This is a digit"<<endl;
    }else{
        cout<<"This is not a digit and not an alphabet"<<endl;
    }

    // if(isalpha(ch)) {
    //     cout<<"This is an alphabet"<<endl;
    // } else if(isdigit(ch)) {
    //     cout<<"This is a digit"<<endl;
    // } else {
    //     cout<<"This is not a digit and not an alphabet"<<endl;
    // }
    return 0;
}