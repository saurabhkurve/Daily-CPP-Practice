// Given the length and breadth of a rectangle, write a program to find whether numerically the area of 
// the rectangle is greater than its perimeter.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float length,breath;
    cout<<"Enter length and breath of a rectangle"<<endl;
    cin>>length>>breath;
    float area = length*breath;
    float perimeter = 2*(length+breath);

    if(area>perimeter){
        cout<<"Area is greater than Perimeter."<<endl;
    }else{
        cout<<"Perimeter is greater than Area."<<endl;
    }
    return 0;
}