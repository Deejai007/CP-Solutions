#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int l = 0;
    int u = 0;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str.at(i) > 96)
            l++;
        else
            u++;
    }
    if (u > l)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }
 
    return 0;
}