//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void mem(int x, int n, int ind, set<int> &ans, vector<pair<char, int>> &v, vector<vector<int>> &dp)
{
    if (ind >= v.size())
    {
        ans.insert(x);
        return;
    }

    if (dp[x][ind] != -1)
    {
        return;
    }

    if (v[ind].first == '0')
    {
        mem((x + v[ind].second) % n, n, ind + 1, ans, v, dp);
    }
    else if (v[ind].first == '1')
    {
        mem((x - v[ind].second + n) % n, n, ind + 1, ans, v, dp);
    }
    else
    {
        mem((x + v[ind].second) % n, n, ind + 1, ans, v, dp);
        mem((x - v[ind].second + n) % n, n, ind + 1, ans, v, dp);
    }

    dp[x][ind] = 1;
    return;
}

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;

    set<int> ans;
    vector<pair<char, int>> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i].second >> v[i].first;
    }

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    mem(x, n, 0, ans, v, dp);

    if (*ans.begin() == 0)
    {
        ans.erase(0);
        ans.insert(n);
    }

    cout << ans.size() << endl;

    for (auto &it : ans)
    {
        cout << it << " ";
    }

    cout << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}