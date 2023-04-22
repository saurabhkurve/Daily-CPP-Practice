#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr1[][3]={8,2,3,4,5,66,7,8,9};
    int arr2[][3]={5,6,4,3,2,6,7,8,4};
    // 1)
    // int res[3][3];

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         res[i][j] = arr1[i][j]+arr2[i][j];
    //     }
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // 2)
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr1[i][j]+arr2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // 3)
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j] = arr2[i][j]+arr1[i][j];
        }

    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}