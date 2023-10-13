#include <bits/stdc++.h>
#define int long long
using namespace std;

int rec(int i, int f, vector<int> &h1, vector<int> &h2, vector<vector<int>> &dp)
{
    if (i == h1.size())
    {
        return 0;
    }

    if (dp[i][f] != -1)
    {
        return dp[i][f];
    }

    if (f)
    {
        return dp[i][f] = max(h1[i] + rec(i + 1, 0, h1, h2, dp), rec(i + 1, 1, h1, h2, dp));
    }
    else
    {
        return dp[i][f] = max(h2[i] + rec(i + 1, 1, h1, h2, dp), rec(i + 1, 0, h1, h2, dp));
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> h1(n), h2(n);

    for (auto &it : h1)
    {
        cin >> it;
    }
    for (auto &it : h2)
    {
        cin >> it;
    }

    vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    cout << max(rec(0, 1, h1, h2, dp), rec(0, 0, h1, h2, dp));
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