//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int rec(int i, int d, vector<int> &v, vector<int> &dp)
{
    if (i == v.size() - 1)
    {
        return 1;
    }

    if (i > v.size() - 1)
    {
        return 1e9;
    }

    if (dp[i] != -1)
    {
        return dp[i];
    }

    int cost = 1e9;
    for (int j = 1; j <= d + 1; j++)
    {
        cost = min(cost, v[i] + rec(i + j, d, v, dp));
    }

    return dp[i] = cost;
}
void solve()
{
    int n, m, k, d;
    cin >> n >> m >> k >> d;

    vector<vector<int>> v(n, vector<int>(m));

    for (auto &it : v)
    {
        for (auto &i : it)
        {
            cin >> i;
            i++;
        }
    }

    int cost = 1e9;
    vector<int> dp(n + 1, -1);
    for (int i = 0; i <= n - k; i++)
    {
        int tCost = 0;
        for (int j = i; j < i + k; j++)
        {
            vector<int> dpp(m + 1, -1);
            if (dp[j] == -1)
            {
                dp[j] = rec(0, d, v[j], dpp);
            }
            tCost += dp[j];
        }
        
        cost = min(cost, tCost);
    }

    cout << cost << endl;
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