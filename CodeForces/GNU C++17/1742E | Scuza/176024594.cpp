#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int y;
    cin >> y;
    while (y--)
    {
        int n, q;
        cin >> n >> q;
 
        ll a[n];
        ll b[q];
        ll sum[n] = {0};
        ll mxh[n] = {0};
        cin >> a[0];
        mxh[0] = a[0];
        sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            mxh[i] = max(a[i], mxh[i - 1]);
            sum[i] = a[i] + sum[i - 1];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
            ll lo = 0;
            ll hi = n - 1;
            ll mid = 0;
 
            ll ans = 0;
            while (lo <= hi)
            {
                mid = (lo + hi) / 2;
                if (b[i] >= mxh[mid])
                {
                    lo = mid + 1;
                    ans = mid;
                }
                if (b[i] < mxh[mid])
                {
                    hi = mid - 1;
                }
            }
            if (lo == 0 && sum[lo] > b[i])
                cout << "0 ";
            else
                cout << sum[ans] << " ";
        }
        cout << endl;
    }
    return 0;
}