#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, e1, e2, t;
        cin >> a >> b >> c;
        e1 = a - 1;
        {
            t = abs(b - c);
            if (b < c)
            {
                e2=2*c-b-1;
            }
            else if(b>c)
            {
                e2=b-1;
            }
        }
        if (e1 == e2)
        {
            cout << "3" << endl;
        }
        else if (e1 > e2)
        {
            cout << "2" << endl;
        }
        else
            cout << "1" << endl;
    }
    return 0;
}