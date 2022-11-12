#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int t = 240 - k;
    int hh = 0, bbb = 0;
    for (int i = 1; i <= n; i++)
    {
 
        hh = hh + i * 5;
        if (hh > t)
        {
            break;
        }
        else
            bbb++;
    }
    cout << bbb << endl;
 
    return 0;
}