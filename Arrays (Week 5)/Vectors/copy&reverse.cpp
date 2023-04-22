//Program for copy and reverse array into another array/vector
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    cout << "Enter elements : " << endl;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v1.push_back(ele);
    }   

    cout<<"Original array : "<<endl;
    display(v1);

    

    //reverse original array
    // int start = 0;
    // int end = v1.size() - 1;

    // while (start < end)
    //  {
    //         int temp = v1[start];
    //         v1[start] = v1[end];
    //         v1[end] = temp;
    //         start++;
    //         end--;
    //  }

    for(int i=0,j=v1.size()-1;i<=j;i++,j--){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }

    // reverse(v1.begin(),v1.end());
    display(v1);
    


    //Copy and reverse into another array
    // vector<int> v2(v1.size());

    // for(int i=0;i<v2.size();i++){
    //     //int i+j = size-1;
    //     int j = v1.size()-1-i;
    //     v2[i] = v1[j];

    // }

    // cout<<"Duplicate array : "<<endl;
    // display(v2);
    // cout << endl;
    return 0;
}