//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    vector<int> suff(n + 1, 0);

    suff[n - 1] = max((int)0, v[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + max((int)0, v[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, ((i & 1) ? 0 : v[i]) + suff[i + 1]);
        // cout << "$" << ans << endl;
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