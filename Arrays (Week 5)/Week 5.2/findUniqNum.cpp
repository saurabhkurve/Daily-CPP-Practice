// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,2,4,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int count=0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i!=j)
            {
                count++;
            }
        }
        if(count==0){
            cout<<arr[i]<<" is an unique element."<<endl;
            return 0;
        }
    }

    cout<<"No unique element available in array"<<endl;

    return 0;
}

