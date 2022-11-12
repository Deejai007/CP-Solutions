#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        int c0 = 0;
        int k;
        int c1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                c1++;
            }
 
            else
            {
                c0++;
            }
        }
        k = min(c0, c1);
        if (k % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
            cout << "DA" << endl;
    }
    return 0;
}