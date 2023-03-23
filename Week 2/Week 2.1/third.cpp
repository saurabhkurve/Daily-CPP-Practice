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
   }else if(year%4==0){  //leap year or not
        cout<<"This is a leap year"<<endl;
    }else{
        cout<<"This is not a leap year."<<endl;
    }
    return 0;
}