#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void placeNegPov(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=v.size()-1;

    while(i<=j){
        if(v[j]>0){
            j--;
        }else if(v[i]<0){
            i++;
        }else if(v[i]>0 && v[j]<0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
    return;
}


int main(){
    vector<int>vec{1,-2,3,-4,-5,6,8,-10};

    for(auto ele:vec){
        cout<<ele<<" ";
    }   
    cout<<endl;

    placeNegPov(vec);

      for(auto ele:vec){
        cout<<ele<<" ";
    }
    return 0;
}