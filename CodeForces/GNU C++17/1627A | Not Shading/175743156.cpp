#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int m, n, r, c;
        cin >> m >> n >> r >> c;
        char a[m][n];
        int ctw = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'W')
                {
                    ctw++;
                }
            }
        }
        if (ctw == 0)
        {
            cout << "0" << endl;
            continue;
        }
        if (a[r - 1][c - 1] == 'B')
        {
            cout << "0" << endl;
            continue;
        }
        if (ctw == (m * n))
        {
            cout << "-1" << endl;
            continue;
        }
        int flag = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[i][c - 1] == 'B')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "1" << endl;
            continue;
        }
        int flag2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[r - 1][i] == 'B')
            {
                flag2 = 1;
                break;
            }
        }
        if (flag2 == 1)
        {
            cout << "1" << endl;
            continue;
        }
        cout << "2" << endl;
    }
    return 0;
}