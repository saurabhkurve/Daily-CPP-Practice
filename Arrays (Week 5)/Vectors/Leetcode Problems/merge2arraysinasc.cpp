#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(n + m);

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
    }

    if (i == n)
    {
        while (j < m)
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
    }

    if (j == m)
    {
        while (i < n)
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
    return res;
}

int main()
{
    vector<int> arr1{1, 4, 5, 8};
    vector<int> arr2{2, 3, 6, 7, 10, 12};
    // vector<int>arr3(arr1.size()+arr2.size());

    vector<int> res = merge(arr1, arr2);

    for (auto ele : res)
    {
        cout << ele << " ";
    }
    return 0;
}