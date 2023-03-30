// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of 
// each digit of the number is equal to the number itself, then the number is called an Armstrong 
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ) 
// Output :
// 1
// 153
// 370
// 371
// 407

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    for(int i =1;i<=500;i++){
        int x = 0,temp = i;
        while(temp >0){
            int m = temp %10;
            x += m*m*m;
            temp = temp /10;
        }
        if(i==x){
            cout<<i<<endl;
        }
    }  
    return 0;
}