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
    n = unique(v.begin(), v.end()) - v.begin();
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] < v[i + 1] && v[i + 1] < v[i + 2])
        {
            ans++;
        }
        if (v[i] > v[i + 1] && v[i + 1] > v[i + 2])
        {
            ans++;
        }
    }
    cout << n - ans << endl;
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