#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, mx = INT_MIN;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == mx)
            {
                cout << (j + 1) << endl;
                break;
            }
        }
    }
    return 0;
}