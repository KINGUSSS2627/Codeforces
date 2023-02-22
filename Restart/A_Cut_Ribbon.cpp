#include <bits/stdc++.h>
using namespace std;
int solve(int n, int a, int b, int c, vector<int> &dp)
{
    if (n == 0)
        return dp[0] = 0;
    if (n < 0)
        return INT_MIN;
    if (dp[n] != -1)
        return dp[n];
    int t1 = 0, t2 = 0, t3 = 0;
    t1 = solve(n - a, a, b, c, dp);
    t2 = solve(n - b, a, b, c, dp);
    t3 = solve(n - c, a, b, c, dp);
    return dp[n] = max(t1, max(t2, t3)) + 1;
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, -1);
    cout << solve(n, a, b, c, dp) << endl;
    return 0;
}