#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p(n);
    vector<int> v1(n);
    vector<int> ans(n);
    int i = 0;
    for (auto &it : p)
    {
        cin >> it.first;
        it.second = i;
        i++;
    }
    sort(p.begin(), p.end());
    for (auto &it : v1)
    {
        cin >> it;
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < n; i++)
    {
        ans[p[i].second] = v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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