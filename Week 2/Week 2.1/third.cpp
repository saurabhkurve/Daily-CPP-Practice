// Any year is input through the keyboard. Write a program to determine whether the year is a leap year 
// or not. (Considering leap year occurs after every 4 years)
// Input 1: 1976
// Output: yes
// Input 2: 2003
// Output: no
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year:"<<endl;
    cin>>year;
    if(year%400==0){
        cout<<"This is a leap year"<<endl;
    }else if(year%100==0){
        cout<<"This is a leap year"<<endl;
   }else if(year%4==0){  
        cout<<"This is a leap year"<<endl;
    }else{
        cout<<"This is not a leap year."<<endl;
    }
    return 0;
}