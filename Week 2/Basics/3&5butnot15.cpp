#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // if((n%3==0 || n%5==0) && n%15!=0){
    //     cout<<"Number is divisible by 3 and 5 but not 15"<<endl;
    // }else{
    //     cout<<"Not matching the conditions!"<<endl;
    // }

    if (n % 3 == 0 || n % 5 == 0)
    {
        if (n % 15 != 0)
        {
            cout << "Number is divisible by 3 and 5 but not 15" << endl;
        }
        else
        {
            cout << "Not matching the conditions!" << endl;
        }
    }else{
        cout << "Not matching the conditions!" << endl;
    }
    return 0;
}
