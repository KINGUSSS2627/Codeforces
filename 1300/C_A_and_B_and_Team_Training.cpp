#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        // i teams are ther if leftm >= 0 && we will cnt if it is possible to form more teams
        int cur = i;
        int leftn = n - i;
        int leftm = m - 2 * i;

        if (leftm >= 0)
        {
            cur += min(leftm, leftn / 2);
            ans = max(ans, cur);
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}