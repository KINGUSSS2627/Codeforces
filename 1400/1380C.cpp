#include <bits/stdc++.h>
#define int long long
using namespace std;

int rec(int idx, int x, vector<int> &v, vector<int> &dp)
{
    if (idx == v.size())
    {
        return 0;
    }

    if (dp[idx] != -1)
    {
        return dp[idx];
    }

    int pick = 0, notPick = 0;
    int tmp = idx + ceil(x / (1.0 * v[idx]));

    if (tmp <= v.size())
    {
        pick = 1 + rec(tmp, x, v, dp);
    }
    notPick = rec(idx + 1, x, v, dp);
    return dp[idx] = max(pick, notPick);
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<int> dp(n + 1, -1);

    cout << rec(0, x, v, dp) << endl;
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