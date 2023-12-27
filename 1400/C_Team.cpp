//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    string s = "";
    while (n && m)
    {
        s += '1';
        s += '$';
        m--;
        s += '0';
        n--;
    }

    if (n > 1)
    {
        cout << -1 << endl;
    }
    else if (n == 1)
    {
        cout << '0';
        for (auto &it : s)
        {
            if (it != '$')
            {
                cout << it;
            }
        }
        cout << endl;
    }
    else
    {
        int i = 0;
        while (i < s.length() && m)
        {
            if (s[i] == '$')
            {
                s[i] = '1';
                m--;
            }
            i++;
        }
        while (m--)
        {
            s += '1';
        }

        string ans = "";
        for (auto &it : s)
        {
            if (it != '$')
            {
                ans += it;
            }
        }

        bool f = 0;
        for (int i = 0; i < ans.size() - 2; i++)
        {
            if (ans[i] == '1' && ans[i + 1] == '1' && ans[i + 2] == '1')
            {
                f = 1;
            }
        }
        if (f)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}