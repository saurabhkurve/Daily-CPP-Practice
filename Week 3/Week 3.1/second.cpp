// Predict the output
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t = 10;
    while (t /= 2)
    {
        cout << "Hello" << endl;
    }
    return 0;
}


/*
t = t/2
10/2 = 5 -->Hello
5/2 = 2  -->Hello
2/2 = 1  --Hello
1/2 = 0  -->False
*/