//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    n %= m;

    int gcd = __gcd(n, m);
    m /= gcd;

    if ((m & (m - 1)) != 0)
    {
        cout << -1 << endl;
        return;
    }

    m *= gcd;

    while (n)
    {
        ans += n;
        n *= 2;
        n = n % m;
    }
    cout << ans << endl;
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