#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reversePart(int i,int j,vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--; 
    }
    return;
}

void reverse(vector<int>v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    return;
}

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    cout << "Enter elements : " << endl;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v1.push_back(ele);
    }   

    reversePart(0,4,v1);
    display(v1);
    return 0;
}