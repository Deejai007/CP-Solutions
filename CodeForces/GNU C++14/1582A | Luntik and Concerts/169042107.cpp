#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    long long l1, l2, l3;
    while (q--)
    {
        cin >> l1 >> l2 >> l3;
        long long s = l1 + 2 * l2 + 3 * l3;
        if (s % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
            cout << 1 << endl;
    }
    return 0;
}