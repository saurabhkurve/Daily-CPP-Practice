// WAP for finding the volume of the cylinder by taking radius and height as input
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float radius;
    float height;
    const float pi=3.14;
    float volume;
    cin>>radius>>height;
    volume = pi * radius * radius *height;
    cout<<"Volume of Cylinder : "<<volume<<endl;   
    return 0;
}