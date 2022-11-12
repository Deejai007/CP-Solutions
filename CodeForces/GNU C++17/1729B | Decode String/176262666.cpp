#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int l, val;
        cin >> l;
        string s;
        cin >> s;
        int temp = l - 1;
        string kk, final;
        char ch;
        while (temp >= 0)
        {
            if (s[temp] == '0')
            {
                val = 10 * (s[temp - 2] - '0') + (s[temp - 1] - '0');
                final = char(val + 96) + final;
                ;
                temp -= 3;
            }
            else
            {
                val = s[temp] - '0';
                final = char(val + 96) + final;
                ;
                temp--;
            }
        }
        cout << final << endl;
    }
    return 0;
}