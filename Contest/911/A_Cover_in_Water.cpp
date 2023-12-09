//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
        {
            cout << 2 << endl;
            return;
        }
    }

    bool f = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            f = 0;
            cnt++;
        }
    }

    if (f)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << cnt << endl;
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