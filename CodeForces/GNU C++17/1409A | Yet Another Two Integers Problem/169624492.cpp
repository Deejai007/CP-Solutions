#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            if (abs(a - b) % 10 == 0)
            {
                cout << abs(a - b) / 10 << endl;
            }
            else
            {
                cout << abs((a - b) / 10) + 1 << endl;
            }
        }
    }
    return 0;
}