#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char c1, c2;
        cin >> c1 >> c2;
        int num = (c1 - 'a') * 25 + (c2 - 'a');
        if (c1 > c2)
        {
            num++;
        }
        cout << num << endl;
    }
    return 0;
}