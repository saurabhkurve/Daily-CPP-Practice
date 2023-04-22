// Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3 
// 4 5 6
// 7 8 9
// Output 1: 
// 1 3
//  5
// 7 9
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

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    for (int i = 0; i < m; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    cout << arr[i][j] << " ";
                }
                else
                {
                    cout << " "<< " ";
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    cout << " "<<" ";
                }
                else
                {
                    cout << arr[i][j] << " ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}