//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto &it : s)
    {
        mp[it]++;
    }
    int cnt = 0;
    for (auto &it : mp)
    {
        if (it.second >= it.first - 64)
        {
            cnt++;
        }
    }
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