// you're given a matrix/2D-Array of size(n*n) change this matrix into its transpose.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter thr number of rows: " << endl;
    cin >> m;
    int n;
    cout << "Enter thr number of rows: " << endl;
    cin >> n;

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
    }

    cout << "Square Matrix is " << endl;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}