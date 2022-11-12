#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, p, f;
 
    string s;
    cin >> l >> s;
    f = l;
    int c0 = 0;
    int c1 = 0;
    for (int i = 0; i < l; i++)
    {
        if (s.at(i) == '0')
        {
            c0++;
        }
        if (s.at(i) == '1')
        {
            c1++;
        }
    }
    cout << abs(c0 - c1);
 
    return 0;
}