//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    v.push_back(l);
    int ans = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        ans = max(ans, v[i] - v[i - 1]);
        if (i == n + 1)
            ans = max(ans, 2 * (v[i] - v[i - 1]));
    }

    cout << ans << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}