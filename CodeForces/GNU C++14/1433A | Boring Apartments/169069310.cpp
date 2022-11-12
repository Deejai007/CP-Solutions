#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int n, s, dig;
    while (q--)
    {
        s = 0;
        cin >> n;
        dig = 0;
        s += (((n) % 10) - 1) * 10;
        while (n)
        {
            dig++;
            n = n / 10;
        }
        switch (dig)
        {
        case 1:
            s += 1;
            break;
        case 2:
            s += 3;
            break;
        case 3:
            s += 6;
            break;
        case 4:
            s += 10;
            break;
        }
        cout << s << endl;
    }
    return 0;
}