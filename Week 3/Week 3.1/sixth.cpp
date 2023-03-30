// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int number;
    int rem = 0,reverse= 0;
    int result = 0;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    int temp = number;
    while(number>0){
        rem = number %10;
        number = number/10;
        reverse = reverse *10 + rem; 
    }   
    result = temp + reverse;
    cout<<"Sum is "<<result<<endl;
    return 0;
}