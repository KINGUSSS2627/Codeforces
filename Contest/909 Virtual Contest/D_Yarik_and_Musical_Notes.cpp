//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &it : v)
    {
        cin >> it;
        mp[it]++;
    }

    int cnt = 0;
    for (auto &it : mp)
    {
        cnt += ceil((it.second * (it.second - 1)) / 2.0);
    }
    if (mp.find(1) != mp.end() && mp.find(2) != mp.end())
        cnt += mp[1] * mp[2];
    cout << cnt << endl;
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