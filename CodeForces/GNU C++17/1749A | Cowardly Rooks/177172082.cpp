#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin >> p;
 
    while (p--)
    {
    map<int, int> row;
    map<int, int> col;
        int ctr = 0;
        int n, m;
        cin >> n >> m;
        pair<int, int> pos[m];
        int k1, k2;
        for (int i = 0; i < m; i++)
        {
            cin >> k1 >> k2;
            row[k1]++;
            col[k2]++;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (row[i] + col[j] == 1)
                {
                    ctr ++;
                    break;
                }
            }
            if (ctr == 1)
            {
                break;
            }
        }
        if (ctr == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
 
    return 0;
}