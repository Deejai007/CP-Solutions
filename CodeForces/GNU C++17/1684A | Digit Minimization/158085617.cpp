#include <bits/stdc++.h>
using namespace std;
int main()
{
    long q, n, dig;
    int min;
    cin >> q;
    while (q--)
    {
        min = 9;
        cin >> n;
        if (n < 100)
        {
            cout << n % 10 << endl;
            continue;
        }
        while (n)
        {
            dig = n % 10;
            if (dig < min)
            {
                min = dig;
            }
            n /= 10;
        }
        cout << min << endl;
    }
    return 0;
}