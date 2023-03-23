#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // char ch = 'A';
    // cout<<ch+100;   //65+100

    // int x;
    // cin>>x;
    // cout<<(float)x/2<<endl;

    float x;
    cin>>x;  //9.1  -1.3
    int y = (int)x;   //9  -2(greatest integer)
    if (y<0) y = y-1;
    x = x -y;
    cout<<x;
    return 0;
}