#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int radius;
    float area,perimeter;
    const float pi=3.1415;
    cout<<"Enter the radius of a circle: "<<endl;
    cin>>radius;

    area = pi*radius*radius;
    perimeter=2*pi*radius;

    if(area>perimeter){
        cout<<"Area is greater than Perimeter."<<" i.e "<<area<<" > "<<perimeter<<endl;
    }else{
        cout<<"Perimeter is greater than Area."<<" i.e "<<perimeter<<" > "<<area<<endl;
    }
    return 0;
}