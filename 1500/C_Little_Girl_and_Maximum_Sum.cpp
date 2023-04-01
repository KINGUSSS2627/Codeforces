#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> pre(n + 1, 0);
    for (auto &it : v)
    {
        cin >> it;
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        pre[l]++;
        pre[r]--;
    }
    for (int i = 1; i < n; i++)
    {
        pre[i] += pre[i - 1];
    }
    sort(v.begin(), v.end(), greater<int>());
    sort(pre.begin(), pre.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += v[i] * pre[i];
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}