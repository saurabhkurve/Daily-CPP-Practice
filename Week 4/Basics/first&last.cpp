//find first and last digit of a number

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void find(int n,int *ptr1,int *ptr2){
    *ptr2 = n%10;  //lastdigit

    while(n>9){
        n = n/10;
    }

    *ptr1 = n;   //firstdigit

}

int main(){
    int n;
    cin>>n;

    int firstdigit,lastdigit;
    int *ptr1 = &firstdigit;
    int *ptr2 = &lastdigit;
    find(n,ptr1,ptr2);
    cout<<firstdigit<<" "<<lastdigit<<endl;
    return 0;
}