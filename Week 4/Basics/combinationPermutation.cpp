#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int fact(int n)
{
    int fc = 1;
    for (int i = 1; i <= n; i++)
    {
        fc *= i;
    }
    return fc;
}

int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

int permutation(int n, int r)
{
    int npr = fact(n) / (fact(n - r));
    return npr;
}
int main()
{
    int n, r;
    cin >> n >> r;

    // int nFact = 1;
    // int rFact = 1;

    // for(int i=1;i<=n;i++){
    //     nFact *=i;
    // }

    // for(int i=1;i<=r;i++){
    //     rFact*=i;
    // }

    // int nrFact = 1;
    // for(int i=1;i<=n-r;i++){
    //     nrFact *=i;
    // }

    // int nCr=nFact/(rFact*nrFact);
    // int nPr = nFact/(nFact-rFact);

    // cout<<nCr<<" "<<nPr<<endl;

    // int nFact= fact(n);
    // int rFact = fact(r);
    // int nrFact = fact(n-r);
    // int nCr=nFact/(rFact*nrFact);

    int nCr = combination(n,
                          r);
    int nPr = permutation(n, r);
    cout << "Combination: " << nCr << endl;
    cout << "Permutation: " << nPr << endl;
    return 0;
}