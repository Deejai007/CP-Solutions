#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
 
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << "2" << endl;
            continue;
        }
        long long k = n / 3;
        int r = n % 3;
        if (r == 0)
        {
            cout << k << endl;
        }
        else
        {
            cout << k + 1 << endl;
        }
    }
    return 0;
}