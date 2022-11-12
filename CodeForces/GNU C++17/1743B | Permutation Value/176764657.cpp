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
 
        int ctr = 1;
        int k = 0;
        int a[n];
        int tt = n;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 2 != 0)
            {
                a[i] = (i / 2) + 1;
            }
            else
            {
                a[i] = tt--;
            }
        }
 
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}