#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
        //store transpose into same array
        // for (int j = 0; j < 3; j++)
        // {
        //     for (int i = 0; i < 2; i++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }


        // store array into another array
        int transpose[3][2];

        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                transpose[i][j] = arr[j][i];
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cout<<transpose[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;



    
    return 0;
}