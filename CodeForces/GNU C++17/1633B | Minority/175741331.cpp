#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int ct1 = 0, ct0 = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '0')
            {
                ct0++;
            }
            else
                ct1++;
        }
        if (ct0 > ct1)
        {
            cout << ct1 << endl;
        }
        else if (ct1 > ct0)
        {
            cout << ct0 << endl;
        }
        else
            cout << (ct0 - 1) << endl;
    }
}