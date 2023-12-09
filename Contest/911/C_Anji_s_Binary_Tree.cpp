//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

int rec(int idx, string &s, vector<pair<int, int>> &child, vector<int> &dp)
{
    if (child[idx].first == 0 && child[idx].second == 0)
    {
        return 0;
    }

    char c = s[idx];
    int lft = 1e9;
    int right = 1e9;

    if (dp[idx] != -1)
    {
        return dp[idx];
    }

    if (c == 'U')
    {
        if (child[idx].first != 0)
            lft = 1 + rec(child[idx].first - 1, s, child, dp);
        if (child[idx].second != 0)
            right = 1 + rec(child[idx].second - 1, s, child, dp);
    }
    else if (c == 'L')
    {
        if (child[idx].first != 0)
            lft = rec(child[idx].first - 1, s, child, dp);
        if (child[idx].second != 0)
            right = 1 + rec(child[idx].second - 1, s, child, dp);
    }
    else
    {
        if (child[idx].first != 0)
            lft = 1 + rec(child[idx].first - 1, s, child, dp);
        if (child[idx].second != 0)
            right = rec(child[idx].second - 1, s, child, dp);
    }
    return dp[idx] = min(lft, right);
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<pair<int, int>> child(n);
    for (auto &it : child)
    {
        cin >> it.first >> it.second;
    }

    vector<int> dp(n + 1, -1);

    cout << rec(0, s, child, dp) << endl;
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