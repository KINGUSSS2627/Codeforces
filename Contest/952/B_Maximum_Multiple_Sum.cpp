//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int ans = -1;
    int maxx = INT_MIN;
    for (int i = 2; i <= n; i++)
    {
        int k = n / i;

        if (maxx < k * (k + 1) / 2 * i)
        {
            maxx = k * (k + 1) / 2 * i;
            ans = i;
        }
    }
    cout << ans << endl;
    return;
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