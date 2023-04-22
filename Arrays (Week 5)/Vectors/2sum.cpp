#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter target: "<<endl;
    cin>>x;

    vector<int>v;
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}