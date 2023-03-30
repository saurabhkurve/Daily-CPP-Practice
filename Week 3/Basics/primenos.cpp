#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int i=2;
    bool flag = true;  //true is prime 
    while(i<=num-1){
        if(num%i==0){
            flag = false; //means numnber is composite
            break;
        }
        i++;
    }
    
    if(num==1){
        cout<<num<<" is neither prime nor composite."<<endl;
    }else if(flag){
        cout<<num<<" is a prime number."<<endl;
    }else{
        cout<<num<<" is a composite number."<<endl;
    }
    return 0;
}