#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(6);
    

    // vec.at(0) = 10;
    // cout<<vec[0]<<endl;
    // cout<<vec.at(1)<<endl;
    
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }

    cout<<endl;

    //Sorting
    sort(vec.begin(),vec.end());

      for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    return 0;
}