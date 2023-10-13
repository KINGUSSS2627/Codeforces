#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int p = n * m;
    vector<int> v(p, 0);
    for (auto &it : v)
    {
        cin >> it;
    }
    if (n < m)
        swap(n, m);
    sort(v.begin(), v.end());
    int minn = v[0], maxx2 = v[n * m - 2], maxx = v[n * m - 1];

    cout << max(((n - 1) * (m - 1) + (n - 1)) * (maxx - minn) + (m - 1) * (maxx - v[1]), ((n - 1) * (m - 1) + (n - 1)) * (maxx - minn) + (m - 1) * (maxx2 - minn)) << endl;
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