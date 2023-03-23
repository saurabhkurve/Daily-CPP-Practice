// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or 
// isosceles triangle
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float s1,s2,s3;
    cout<<"Enter 3 sides of a triangle"<<endl;
    cin>>s1>>s2>>s3;

    if(s1==s2 && s2==s3){
        cout<<"This is an equillateral triangle"<<endl;
    }else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"This is an isoceles triangle"<<endl;
    }else{
        cout<<"This is a Scalene triangle"<<endl;
    }
    return 0;
}