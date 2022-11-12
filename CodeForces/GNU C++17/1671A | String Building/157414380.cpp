#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    string s;
    int ct = 0;
    while (q--)
    {
        ct = 0;
        cin >> s;
        if (s.length() < 2)
        {
            cout << "NO" << endl;
            continue;
        }
        if (s.at((s.length() - 1)) != s.at((s.length() - 2)))
        {
            cout << "NO" << endl;
            continue;
        }
        if (s.length() > 1)
        {
            if (s.at(0) != s.at(1))
            {
                cout << "NO" << endl;
                continue;
            }
        }
 
        for (int i = 2; i < s.length(); i++)
        {
 
            if ((s.at(i - 2) != s.at(i - 1)) && (s.at(i - 1) != s.at(i)))
                ct++;
        }
        if (ct > 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
 
    return 0;
}