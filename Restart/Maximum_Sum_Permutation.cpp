#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    vector<pair<int, int>> p;
    vector<int> pr(n + 1, 0);
    for (int i = 0; i < q; i++)
    {
        cin >> p[i].first >> p[i].second;
        for (int j = p[i].first; j <= p[i].second; j++)
        {
            pr[j]++;
        }
    }
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