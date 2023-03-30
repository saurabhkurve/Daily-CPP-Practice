// Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output :
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    int fact = 1;
    cout<<"Enter the number to find its fibbonaci number : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact = fact * i;
        cout<<fact<<" "<<endl;
    }   
    return 0;
}