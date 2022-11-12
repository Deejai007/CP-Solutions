#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int n, k, r, f;
    while (q--)
    {
        cin >> n >> k;
        int arr[k];
        r = n % k;
        f = r - k / 2;
        if (f >= 0)
        {
            cout << n - f << endl;
        }
        else
        {
            cout << n << endl;
            continue;
        }
    }
    return 0;
}