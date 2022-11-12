#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "YES" << endl;
            continue;
        }
        if (c + b == a)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a + c == b)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}