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
 
        int ctr = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] == a[i])
            {
                ctr = 1;
                break;
            }
        }
 
        if (ctr == 1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}