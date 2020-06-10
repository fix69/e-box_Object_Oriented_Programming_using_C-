//break_the_bond
//jatt_james_bond
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;

    char a = str[0], b = str[1];
    if (str.length() == 2){
        cout << "Yes";
        return;
    }
    if ( a == b){
        cout << "No";
        return;
    }
    for (int i = 2; i < str.length(); ++i)
    {
        if (i % 2 == 0)
        {
            if (str[i] != a)
            {
                cout << "No";
                return;
            }
        }
        else
        {
            if (str[i] != b)
            {
                cout << "No";
                return;
            }
        }
    }
    cout << "Yes";
}
int32_t main()
{
    int t{1};
    while (t--)
    {
        solve();
    }
}
