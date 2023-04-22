// Find the first non-repeating element in the array 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v{2, 3, 4, 5, 6, 7, 6};

    for (int i = 0; i < v.size(); i++)
    {
        int j;
        for (j = 0; j < v.size(); j++)
        {
            if (i != j && v[i] == v[j]) //repeated element found
            {
                break;
            }
        }
        if (j == v.size())
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 2, 4, 7};
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         int j;
//         // Checking if ith element is present in array
//         for (j = 0; j < n; j++)
//             if (i != j && arr[i] == arr[j])
//                 break;
//         if (j == n)
//         {
//             cout << arr[i]<<" ";
//             // return 0;
//         }
//     }
//     return 0;
// }