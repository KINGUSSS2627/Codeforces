#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int t1 = n / x;
    int t2 = n / y;
    int t3 = n / ((x * y) / __gcd(x, y));

    t1 -= t3;
    t2 -= t3;

    int t4 = n - t1 + 1;
    int ans = -t2 * (t2 + 1) / 2 + n * (n + 1) / 2 - t4 * (t4 - 1) / 2;
    cout << ans << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}