//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> s(n), w(n), p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].first;
        s[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i].first;
        w[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
        p[i].second = i;
    }

    sort(s.begin(), s.end());
    sort(p.begin(), p.end());
    sort(w.begin(), w.end());

    int ans = 0;

    for (int i = n - 1; i > n - 4; i--)
    {
        for (int j = n - 1; j > n - 4; j--)
        {
            for (int k = n - 1; k > n - 4; k--)
            {
                if (s[i].second != p[j].second && p[j].second != w[k].second && s[i].second != w[k].second)
                {
                    ans = max(ans, s[i].first + p[j].first + w[k].first);
                }
            }
        }
    }

    cout << ans << endl;
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