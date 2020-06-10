//break_the_bond
//jatt_james_bond
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int ones{0}, zeros{0};

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '1')
        {
            ones++;
        }
        if (str[i] == '0')
        {
            zeros++;
        }
    }
    ((ones == 1) or (zeros == 1)) ? cout << "Yes" : cout << "No";
}
int32_t main()
{
    int t{1};
    while (t--)
    {
        solve();
    }
}
