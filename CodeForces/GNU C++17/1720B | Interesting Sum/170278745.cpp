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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int s = abs(arr[0] + arr[1] - arr[n - 2] - arr[n - 1]);
        cout << s << endl;
    }
    return 0;
}