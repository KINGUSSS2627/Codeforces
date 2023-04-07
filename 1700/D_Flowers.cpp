#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
const int MOD = 1e9 + 7;
const int n = 1e5 + 1;
int dp[n] = {0};
int pref[n + 1] = {0};
int ADD(int a, int b)
{
    return (a % MOD + b % MOD) % MOD;
}
void precompute(int k)
{
    // either we eat a red or we eat white in grp of k after eating a red fron len l we have l-1 len left :. we can break it to a sub problem of it similarly if i eat white i take out len k :. subproblem of length l-k will be there
    // till length k-1 only we can red's :. only one way
    // for len k we have two ways rrrrr.... or wwwww.....
    for (int i = 1; i < n; i++)
    {
        if (i < k)
            dp[i] = 1;
        else if (i == k)
            dp[i] = 2;
        else
        {
            dp[i] = ADD(dp[i], dp[i - 1]);
            dp[i] = ADD(dp[i], dp[i - k]);
        }
        pref[i] = ADD(pref[i], pref[i - 1]);
        pref[i] = ADD(pref[i], dp[i]);
    }
}
void solve(int k)
{
    int a, b;
    cin >> a >> b;
    int temp = (pref[b] - pref[a - 1]) % MOD;
    if (temp < 0)
        temp += MOD;
    cout << temp << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, k;
    cin >> t >> k;
    precompute(k);
    tc
    {
        solve(k);
    }
    return 0;
}