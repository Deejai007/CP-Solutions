#include <bits/stdc++.h>
using namespace std;
 
int factorial(int n)
{
    if (n == 0)
        return 1;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l;
        cin >> l;
        int a[l];
 
        int ct = 0;
        for (int i = 0; i < l; i++)
        {
            cin >> a[l];
 
            ct++;
        }
        int k = 10 - ct;
        cout << (6 * nCr(k, 2)) << endl;
    }
    return 0;
}