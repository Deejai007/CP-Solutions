#include <bits/stdc++.h>
using namespace std;
int main()
 
{
    long long q, l, r, n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        l = -(n - 1);
        r = n;
        cout << l << " " << r << endl;
    }
    return 0;
}