//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    char c = s[0];
    char c1 = s[1];

    for (char i = '1'; i <= '8'; i++)
    {
        if (i != c1)
        {
            cout << c << i << endl;
        }
    }

    for (char i = 'a'; i <= 'h'; i++)
    {
        if (i != c)
        {
            cout << i << c1 << endl;
        }
    }
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}