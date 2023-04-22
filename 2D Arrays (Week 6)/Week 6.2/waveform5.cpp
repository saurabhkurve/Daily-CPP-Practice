// Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;

    int arr[m][n];
    for (int i= 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int j = 0; j <n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = m-1; i >=0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}