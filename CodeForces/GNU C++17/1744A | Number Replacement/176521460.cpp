#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        map<int, char> m;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
 
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] == '\0' || m[a[i]] == s[i])
                m[a[i]] = s[i];
            else
            {
 
                ct = 1;
                break;
            }
        }
        if (ct == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}