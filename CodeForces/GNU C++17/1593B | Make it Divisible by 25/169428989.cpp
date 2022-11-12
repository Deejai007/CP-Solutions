#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, l;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ct = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int num = (s[i] - '0') * 10 + (s[j] - '0');
                if (num % 25 == 0)
                {
                    ct = min(ct, (j - i - 1) + (n - 1 - j));
                }
            }
        }
        cout << ct << endl;
    }
 
    return 0;
}