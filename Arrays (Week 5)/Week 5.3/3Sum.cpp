// Count the number of triplets whose sum is equal to the given value x.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countTriplet(vector<int> &vec, int ele)
{

    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            for (int k = j + 1; k < vec.size(); k++)
            {
                if (vec[i] + vec[j] + vec[k] == ele)
                {
                    count++;
                    cout << "[" << i << "," << j << "," << k << "]" << endl;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter size of an array: " << endl;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int ele;
    cout << "Enter target" << endl;
    cin >> ele;

    int sum = countTriplet(vec, ele);
    
    cout << "3 Sum Count: " << sum << endl;
    return 0;
}