// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    int i = 0;
    while (i < 26)
    {
        cout << "ASCII value of " << (char)(i + 'a') << " is " << (int)(i + 'a') << endl;
        i++;
    }
}