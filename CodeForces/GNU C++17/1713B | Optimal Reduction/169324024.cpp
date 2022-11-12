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
        long long arr[n];
        long long k = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (k + 1 < n && arr[k + 1] >= arr[k])
            k++;
        while (k + 1 < n && arr[k + 1] <= arr[k])
            k++;
 
        if (k + 1 == n)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
    return 0;
}