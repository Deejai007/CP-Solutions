#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, maz;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        int a[n];
        maz = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            maz = max(maz, m[a[i]]);
        }
        cout << maz << endl;
    }
    return 0;
}