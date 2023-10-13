#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int rec(int ind, int ans, vector<int> &d, vector<int> &a, int cap, vector<vector<int>> dp)
{
    if (ind == 0 || cap == 0)
    {
        return ans;
    }

    if (dp[ind][ans] != -1)
    {
        return dp[ind][ans];
    }

    int Pick = rec(ind - 1, ans, d, a, cap, dp);
    int notPick = 1e9;
    if (ind > 0)
    {
        notPick = rec(ind - 1, ans + d[ind] * (a[ind - 1] - a[ind]), d, a, cap - 1, dp);
    }
    return dp[ind][ans] = min(Pick, notPick);
}
void solve()
{
    int n, l, k;
    cin >> n >> l >> k;

    vector<int> d(n);
    vector<int> a(n);

    for (auto &it : d)
    {
        cin >> it;
    }

    for (auto &it : a)
    {
        cin >> it;
    }

    for (int i = 0; i < n - 1; i++)
    {
        d[i] = d[i + 1] - d[i];
    }
    d[n - 1] = l - d[n - 1];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += d[i] * a[i];
    }

    vector<vector<int>> dp(n, vector<int>(ans + 1, -1));
    cout << rec(n - 1, ans, d, a, k, dp) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}