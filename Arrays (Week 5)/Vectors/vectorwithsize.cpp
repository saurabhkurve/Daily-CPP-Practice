#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    

    vector<int>vec1(5,6); //6 6 6 6 6 
    for(auto ele:vec1){
        cout<<ele<<" ";
    }
    cout<<endl;

    //Taking input
    vector<int>vec(5);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl; 
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
    cout<<endl;

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    int n;
    cout<<"Enter size of an array: "<<endl;
    cin>>n;
    vector<int>vec3;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec3.push_back(x);
    }

    cout<<endl;

    for(int i=0;i<vec3.size();i++){
        cout<<vec3[i]<<" ";
    }
    // for(auto ele:vec3){
    //     cout<<ele;
    // }
    cout<<endl;
    return 0;
}