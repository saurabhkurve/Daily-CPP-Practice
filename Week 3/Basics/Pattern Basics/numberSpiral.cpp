#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            int a=i;
            int b=j;
            //a+i = 2n
            //a = 2n-i
            if(a>n) a = 2*n-i;  //changes 5 6 7th row to 3 2 1
            if(b>n) b = 2*n-j;  //for column 
            int x = min(a,b);
            cout<<n-x+1;  //reverse spiral
        }
        cout << endl;
    }
    return 0;
}