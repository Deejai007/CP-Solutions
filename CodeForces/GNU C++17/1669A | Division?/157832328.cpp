#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, score;
    cin >> q;
    while (q--)
    {
        cin >> score;
        if (score <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if (score <= 1599)
        {
 
            cout << "Division 3" << endl;
        }
        else if (score <= 1899)
        {
 
            cout << "Division 2" << endl;
        }
        else
        {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}
/*Codeforces separates its users into 4 divisions by their rating:
 
For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399*/