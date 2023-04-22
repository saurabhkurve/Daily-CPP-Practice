#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter rows of 1st Martix: ";
    cin >> m;
    int n;
    cout << "Enter column of 1st Martix: ";
    cin >> n;

    int p;
    cout << "Enter rows of 2nd Martix: ";
    cin >> p;
    int q;
    cout << "Enter column of 2nd Martix: ";
    cin >> q;

    if (n == p)
    {
        int arr1[m][n];
        int arr2[p][q];

        cout << "Enter element of 1st matrix" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr1[i][j];
            }
        }

        cout << "Enter element of 1st matrix" << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> arr2[i][j];
            }
        }
        cout << endl;
        // resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout << "Resultant Matrix: " << endl;
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication is not possible: " << endl;
    }
    return 0;
}