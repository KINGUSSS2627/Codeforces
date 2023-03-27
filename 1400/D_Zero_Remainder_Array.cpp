#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    map<int, int> mod;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if (p % k)
        {
            v.push_back({p, p % k});
            mod[k - (p % k)]++;
        }
    }
    int ans = 0;
    bool flag = 0;
    for (auto &it : mod)
    {
        ans = max(ans, k * (it.second - 1) + it.first);
        flag = 1;
    }
    if (flag)
        ans++;
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