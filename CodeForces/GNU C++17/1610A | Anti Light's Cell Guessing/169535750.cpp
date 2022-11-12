#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int r, c;
        cin >> r >> c;
        if (r == 1 || c == 1)
        {
            if (r == c)
            {
                cout << '0' << endl;
            }
            else
                cout << "1" << endl;
        }
        else
 
            cout << "2" << endl;
    }
    return 0;
}