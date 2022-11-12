#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int p;
    cin >> p;
    while (p--)
    {
        ll n, q;
        ll sum = 0;
        cin >> n >> q;
        ll a[n];
        ll ctod = 0, ctev = 0;
 
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0)
            {
                ctev++;
            }
            else
                ctod++;
        }
 
        ll fs = sum;
        ll p1, p2;
        for (ll j = 0; j < q; j++)
        {
            cin >> p1 >> p2;
            if (p1 == 0)
            {
                fs += ctev * p2;
                if (p2 % 2 != 0)
                {
                    ctev = 0;
                    ctod = n;
                }
            }
            if (p1 == 1)
            {
                fs += ctod * p2;
                if (p2 % 2 != 0)
                {
                    ctod = 0;
                    ctev = n;
                }
            }
            cout << fs << endl;
        }
    }
    return 0;
}