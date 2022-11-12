#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long q, n, s, t, g;
    cin >> q;
    while (q--)
    {
        g = 1;
        cin >> n;
        while (1)
        {
            s = 0;
            t = n;
            while (t)
            {
                s = s + t % 10;
                t /= 10;
            }
            g = gcd(n, s);
            if (g > 1)
            {
                cout << n << endl;
                break;
            }
            else
                n++;
        }
    }
    return 0;
}