#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
    int maxx = *max_element(v.begin(), v.end());
    vector<vector<int>> v1(maxx + 1);
    for (int i = 0; i < n; i++)
    {
        v1[v[i]].push_back(i);
    }
    bool f = 0;
    for (auto &it : v1)
    {
        int sz = it.size();
        if (sz)
            if (it[sz - 1] - it[0] >= 2)
            {
                f = 1;
                break;
            }
    }
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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