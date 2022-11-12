#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        char a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int t, minn = INT_MAX;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '1')
            {
                if (b[i] < minn)
                {
                    minn = b[i];
                    t = i;
                }
            }
            else
            {
                if (b[i] > minn)
                {
                    a[t] = '0';
                    a[i] = '1';
                }
                minn = INT_MAX;
            }
        }
 
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                sum += (ll)b[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}