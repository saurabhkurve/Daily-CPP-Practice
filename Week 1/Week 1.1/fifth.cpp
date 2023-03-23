// Write a program to find the circumference of a circle with radius 10 in C++
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float radius;
    const float pi = 3.1415;
    float circum;
    cin>>radius;
    circum = 2*pi*radius;
    cout<<"Circumferance of Circle : "<<circum<<endl;
    return 0;
}   