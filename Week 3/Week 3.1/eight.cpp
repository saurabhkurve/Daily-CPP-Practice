// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output : 1 1 2 3 5 8 13 21 34 55

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int f1,f2,num;
    int sum = 0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    f1 = 1;
    f2 = 1;
    cout<<f1<<" "<<f2<<" ";
    for(int i=1;i<=num-2;i++){
        sum = f1 + f2;
        cout<<sum<<" ";
        f1 = f2;
        f2 = sum;
    }   
    return 0;
}