#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), v1(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    for (auto &it : v1)
    {
        cin >> it;
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end(), greater<int>());
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int val = (upper_bound(v.begin(), v.end(), v1[i]) - v.begin());

        if (n - val - i <= 0)
            res = 0;
        else
            res = (((n - val - i) % mod) * (res % mod)) % mod;
    }
    cout << res << endl;
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