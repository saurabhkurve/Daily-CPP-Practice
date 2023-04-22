#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void sort01m1(vector<int> &vec){
//     int count0=0;
//     int count1=0;

//     for(int i=0;i<vec.size();i++){
//         if(vec[i]==0){
//             count0++;
//         }else{
//             count1++;
//         }
//     }

//     // int i=0;
//     // while(count0>0){
//     //     vec[i++]=0;
//     //     count0--;
//     // }
//     // while(count1>0){
//     //     vec[i++]=1;
//     //     count1--;
//     // }

//     for(int i=0;i<vec.size();i++){
//         if(i<count0){
//             vec[i] = 0;
//         }else{
//              vec[i] = 1;
//         }
//     }
// }


//Using 2 pointer method
void sort01m2(vector<int> &vec){
    int n = vec.size();
    int i=0;
    int j=vec.size()-1;

    while(i<=j){
        if(vec[j]==1){
            j--;
        }else if(vec[i]==0){
            i++;
        }else if(vec[i]==1 && vec[j]==0){
            int temp = vec[i];
            vec[i]=vec[j];
            vec[j]=temp;
            i++;
            j--;
        }
    }
    


}

int main(){
    vector<int>vec{1,1,0,1,0,1,1,0};

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    // sort01m1(vec);

    sort01m2(vec);

    // sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}