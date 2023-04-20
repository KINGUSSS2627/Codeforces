#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, x, m;
    cin >> n >> x >> m;
    vector<pair<int, int>> p(m);
    int l = x, r = x;
    for (int i = 0; i < m; i++)
    {
        cin >> p[i].first >> p[i].second;
        if (p[i].first <= l && l <= p[i].second)
        {
            l = p[i].first;
        }
        if (p[i].second >= r && p[i].first <= r)
        {
            r = p[i].second;
        }
    }
    cout << r - l + 1 << endl;
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