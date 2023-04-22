#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    
    int x = 4;

    int idx = -1;

    //forward loop
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         idx = i;
    //     }
    // }

    //backward loop
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx<<endl;
    return 0;
}