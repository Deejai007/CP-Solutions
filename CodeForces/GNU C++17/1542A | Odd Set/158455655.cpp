#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, n;
    int cte = 0;
    int cto = 0;
    cin >> q;
    while (q--)
    {
        cte=0;
        cto=0;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                cte++;
            }
            else
                cto++;
        }
        if (cte == cto)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}