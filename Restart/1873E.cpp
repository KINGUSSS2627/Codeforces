#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int ht = v[i] - v[i - 1];
        if (ans + ht * i > x)
        {
            int lft = x - ans;
            int eht = lft / i;
            cout << v[i - 1] + eht << endl;
            return;
        }
        ans += ht * i;
    }
    int lft = x - ans;
    int htt = lft / n;
    cout << v[n - 1] + htt << endl;
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}