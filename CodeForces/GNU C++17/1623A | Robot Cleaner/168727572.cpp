#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z, r, c, rr, cr, rg, cg, x, y;
    cin >> z;
    while (z--)
    {
        x = 0;
        y = 0;
        cin >> r >> c >> rr >> cr >> rg >> cg;
        if (rr > rg)
        {
            x = 2 * r - rr - rg;
        }
        else if (rr < rg)
        {
            x = rg - rr;
        }
        if (cr > cg)
        {
            y = 2 * c - cr - cg;
        }
        else if (cr < cg)
        {
            y = cg - cr;
        }
        if (x <= y)
        {
            cout << x << endl;
        }
        else
            cout << y << endl;
    }
    return 0;
}