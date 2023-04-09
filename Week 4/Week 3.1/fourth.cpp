// Q4: Write a function to count the number of digits in a number and then print the square of this number

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void digit(int n){
//     // int r;
//     int temp = n;
//     int count = 0;
//     while(n!=0){
//         // r = n%10;
//         count++;
//         n = n/10;
//     }
//     cout<<"Count of Number: "<<count<<endl;
//     cout<<"Square of Original number is : "<<temp*temp<<endl;
// }

int Square(int n){
    return n*n;
}

int digit(int n){
    int count = 0;
    while(n!=0){
        count++;
        n = n/10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int nod = digit(n); 
    int sq = Square(nod);
    cout<<"Count of Number: "<<nod<<endl;
    cout<<"Square is : "<<sq<<endl;
    return 0;
}