// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int rem;
    int sum = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    int i = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        if (rem % 2 == 0)
            sum += rem;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}