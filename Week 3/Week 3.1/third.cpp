// Predict the output
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x * x <= 10; x++)
        cout << "In for loop" << endl;
    return 0;
}

/*
    1*1 = 1 <=10
    2*2 = 4 <=10
    3*3 = 9 <=10
    4*4 = 16 !=10 hence false
*/