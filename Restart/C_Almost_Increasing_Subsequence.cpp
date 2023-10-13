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
    vector<int> pref(n + 1, 0);
    for (int i = 2; i < n; i++)
    {
        if (v[i - 1] <= v[i - 2] && v[i] <= v[i - 1])
        {
            pref[i + 1] = 1;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        pref[i] += pref[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (r - l + 1 < 3)
        {
            // cout << 0 << endl;
            cout << r - l + 1 << endl;
        }
        else
        {
            cout << r - l + 1 - (pref[r] - pref[l + 1]) << endl;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}