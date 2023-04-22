#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void change(vector<int> &v){
    v[0] = 66;
}

int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);

    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}