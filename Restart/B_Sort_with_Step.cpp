#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int cnt = 0;
    vector<pair<int, int>> p;
    int i = 1;
    for (auto &it : v)
    {
        cin >> it;
        if (abs(i - it) % k)
        {
            p.push_back({i, it});
            cnt++;
        }
        i++;
    }
    if (!cnt)
        cout << 0 << endl;
    else if (cnt == 2)
    {
        if (abs(p[0].first - p[1].second) % k == 0 && abs(p[1].first - p[0].second) % k == 0)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    else
        cout << -1 << endl;
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