#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int MOD = 1e9 + 7;
int rec(int wt, int k, int d, int taken, vector<vector<int>> &dp)
{
    if (wt == 0 && taken)
    {
        return 1;
    }
    else if (wt <= 0)
    {
        return 0;
    }
    if (dp[wt][taken] != -1)
    {
        return dp[wt][taken];
    }
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        if (wt >= i)
        {
            if (i >= d || taken)
            {
                ans += rec(wt - i, k, d, 1, dp);
            }
            else
            {
                ans += rec(wt - i, k, d, 0, dp);
            }
            ans %= MOD;
        }
    }
    return dp[wt][taken] = ans;
}
void solve()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    cout << rec(n, k, d, 0, dp) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}