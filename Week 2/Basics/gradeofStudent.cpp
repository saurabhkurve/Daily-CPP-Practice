#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;
    if(marks>=91){
        cout<<"Excellent"<<endl;
    }else if(marks>=81){
        cout<<"Very good"<<endl;
    }else if(marks>=71){
        cout<<"Good"<<endl;
    }else if(marks>=61){
        cout<<"Can do better"<<endl;
    }else if(marks>=51){
        cout<<"Average"<<endl;
    }else if(marks>=40){
        cout<<"Below average"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }
    return 0;
}