//Rotate the given array 'a' by k steps,where k is non-negative.
//Note: k can be greater than n as well where n is the size of array ''a'.


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reversePart(int a,int b,vector<int> &v){
    while(a<=b){
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;
        a++;
        b--;
    }
    return;
}

// void reverse(vector<int> &v){
//     int i = 0;
//     int j= v.size()-1;
//     while(i<=j){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
void printArray(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>vec{1,6,2,3,7,4,8};
    int k = 50; 
    int n = vec.size();
    if(k>n) k = k%n;    //i.e 50%7 = 1  49+1 = 7 7 7 7 7 7 7 1 here when k==n array will give original output.
    printArray(vec);
    reversePart(0,n-k-1,vec);
    reversePart(n-k,n-1,vec);
    // reverse(vec);
    reversePart(0,n-1,vec);
    printArray(vec);
    return 0;
}