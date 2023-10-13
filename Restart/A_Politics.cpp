#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    vector<int> take(n, 1);
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (v[j][i] != v[0][i])
            {
                take[j] = 0;
            }
        }
    }
    int ans = 0;
    for (auto &it : take)
    {
        if (it)
            ans++;
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