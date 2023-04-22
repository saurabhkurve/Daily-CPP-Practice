#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    vector<int>vec;  //you need not mention the size

    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(50);

    // cout<<vec[0]<<endl;
    // vec[0] = 99;
    // cout<<vec[0]<<endl;

    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;
    vec.pop_back();
    vec.pop_back();

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    // return 0;
}