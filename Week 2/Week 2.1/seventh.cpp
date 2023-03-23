// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float x,y;
    cout<<"Enter x and y coordinates"<<endl;
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"The point is lie on the origin"<<endl;
    }else if(x==0 && y!=0){
        cout<<"The point is lie on y-axis"<<endl;
    }else if(x!=0 && y==0){
        cout<<"The point is lie on the x-axis"<<endl;
    }else if(x!=0 && y!=0){
        cout<<"the point is lie on the plain"<<endl;
    }
    return 0;
}