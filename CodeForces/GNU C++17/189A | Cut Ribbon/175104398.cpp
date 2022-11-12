#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, k;
    cin >> n >> a >> b >> c;
    int mx = 0;
    for (int i = 0; i * a <= n; i++)
    {
        for (int j = 0; j * b + i * a <= n; j++)
        {
            if ((n - j * b - i * a) % c == 0)
            {
                k = (n - a * i - b * j) / c;
                mx = max(mx, i + j + k);
            }
        }
    }
    cout << mx << endl;
    return 0;
}