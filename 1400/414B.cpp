#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1e9 + 7;
int ADD(int a, int b)
{
    return (a % MOD + b % MOD) % MOD;
}

int rec(int ind, int val, int n, int k, vector<vector<int>> &dp)
{
    if (ind == k)
    {
        return dp[ind][val] = 1;
    }

    if (dp[ind][val] != -1)
    {
        return dp[ind][val];
    }

    int ans = 0;

    // Ya jo hai vo lenge ya uska koi multiple
    // Pick to hai hi for loop not pick kar lega
    for (int i = val; i <= n; i += val)
    {
        ans = ADD(ans, rec(ind + 1, i, n, k, dp));
    }
    return dp[ind][val] = ans % MOD;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(k + 1, vector<int>(n + 1, -1));
    cout << rec(0, 1, n, k, dp) << endl;
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