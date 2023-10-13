#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pre[n];
    if (a[0] <= q)
        pre[0] = 1;
    else
        pre[0] = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > q)
            pre[i] = 0;
        else
        {
            pre[i] = pre[i - 1] + 1;
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (pre[i] >= k)
        {
            ans += (pre[i] - k + 1);
        }
    }

    cout << ans << endl;
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