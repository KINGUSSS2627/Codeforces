//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    map<int, int> mp;
    for (auto &it : s)
    {
        mp[it]++;
    }

    int zero = 0;

    int ans = max(m - mp['A'], zero) + max(m - mp['B'], zero) + max(m - mp['C'], zero) + max(m - mp['D'], zero) + max(m - mp['E'], zero) + max(m - mp['F'], zero) + max(m - mp['G'], zero);
    cout << ans << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}