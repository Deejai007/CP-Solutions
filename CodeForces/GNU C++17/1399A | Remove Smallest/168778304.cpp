#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, n, i, j, ct;
 
    cin >> q;
    while (q--)
    {
        ct = 0;
 
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) > 1)
            {
                ct = 1;
                break;
            }
        }
 
        if (ct == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}