#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, len, ct;
 
    string str;
    cin >> q;
    while (q--)
    {
        cin >> str;
        ct = 0;
        len = str.length();
        if (len % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0, j = (len / 2); i < len && j < len; i++, j++)
        {
            if (str.at(i) != str.at(j))
                ct++;
        }
        if (ct == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}