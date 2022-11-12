#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, len;
    string str;
    cin >> q;
    while (q--)
    {
        cin >> len >> str;
        if (len > 2)
        {
            cout << "NO" << endl;
        }
        else if (len == 2)
        {
            if (str.at(0) == str.at(1))
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}