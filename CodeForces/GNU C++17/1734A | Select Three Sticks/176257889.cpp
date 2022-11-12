#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int dif = INT_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            dif = min(dif, a[i + 1] - a[i - 1]);
        }
        cout << dif << endl;
    }
    return 0;
}