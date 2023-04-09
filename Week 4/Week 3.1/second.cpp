// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float areaOfzcircle(float r){
    float area;
    area = 3.1415*r*r;
    return area;
}

int main(){
    float r;
    cin>>r;

    cout<<areaOfzcircle(r);

    return 0;
}