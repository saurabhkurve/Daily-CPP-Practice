#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={3,4,2,1,2,3,4,5,10};

    int sum = 0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum +=arr[i][j];
        }
    }

    cout<<"Sum is "<<sum<<endl;
    return 0;
}