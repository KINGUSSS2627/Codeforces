#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int rec(int ind, vector<int> &v, vector<int> &dp, int n)
{
    if (ind > n)
        return 0;

    if (dp[ind] != -1)
        return dp[ind];
    int cnt = 0;
    for (int i = 2 * ind; i <= n; i += ind)
    {
        if (v[i] > v[ind])
        {
            cnt = max(cnt, 1 + rec(i, v, dp, n));
        }
    }

    return dp[ind] = cnt;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> dp(n + 2, -1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, rec(i, v, dp, n));
    }
    cout << ans + 1 << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}