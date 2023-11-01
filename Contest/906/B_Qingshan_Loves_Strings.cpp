#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1;
    cin >> s2;

    bool f = 1;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (s1[i] == s1[i - 1])
        {
            cnt++;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (s1[i] == s1[i - 1] && (s2[0] == s1[i - 1] || s2[m - 1] == s1[i]))
        {
            f = 0;
        }
    }

    for (int i = 1; i < m; i++)
    {
        if (s2[i] == s2[i - 1])
        {
            f = 0;
        }
    }

    if (f || cnt == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}