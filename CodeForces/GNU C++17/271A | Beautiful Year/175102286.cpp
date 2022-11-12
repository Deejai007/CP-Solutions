#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin >> temp;
    while (temp++)
    {
        n = temp;
 
        int a = n % 10;
        n /= 10;
        int b = n % 10;
        n /= 10;
        int c = n % 10;
        n /= 10;
        int d = n % 10;
        if (a == b || b == c || c == d || a == c || a == d || c == d||b==d)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    cout << temp;
    return 0;
}