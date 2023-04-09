#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int minimumOf2(int num1,int num2){
    if(num1>num2){
        return num1;
    }else if(num1<num2){
        return num2;
    }else{
        return -1;
    }
}

int main(){
    int x,y;
    cin>>x>>y;

    // cout<<minimumOf2(x,y)<<endl;
    int mini = minimumOf2(x,y);
    if(mini == -1){
        cout<<"Both are same"<<endl;
    }else{
        cout<<mini<<" is maximum"<<endl;
    }
    return 0;
}