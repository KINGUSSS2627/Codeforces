#include <bits/stdc++.h>
#define int long long
int mod = 998244353;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (auto &it : a)
    {
        cin >> it;
    }

    for (auto &it : b)
    {
        cin >> it;
    }

    int m;
    cin >> m;
    vector<int> c(m), d(m);

    for (auto &it : c)
    {
        cin >> it;
    }

    for (auto &it : d)
    {
        cin >> it;
    }
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