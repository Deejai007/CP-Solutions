#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, mx;
        cin >> n;
        int a[n];
        int kt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        while (kt < n - 1)
        {
            kt = 0;
            for (int j = 0; j < n; j++)
            {
 
                if (a[j] == 0)
                {
                    kt++;
                }
                for (int k = j + 1; k < n; k++)
                {
                    if (a[j] != 0 && a[k] != 0)
                    {
                        a[k]--;
                        a[j]--;
                    }
                }
            }
        }
        for (int l = 0; l < n; l++)
        {
            if (a[l] > 0)
 
                cout << (l + 1) << endl;
        }
    }
    return 0;
}