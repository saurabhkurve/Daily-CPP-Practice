#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to get multiplication table : ";
    cin>>n;

    int i=1;
    while (i<=100)
    {
        cout<<i*n<<" ";
        i++;
    }

 
        // int n;
        // cin >> n;
        // for (int i = 1; i <= 100; i++) 
        //     cout << n*i << " ";


    
    return 0;
}