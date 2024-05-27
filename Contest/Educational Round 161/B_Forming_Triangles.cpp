//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int nc3(int n)
{
    if (n < 3)
    {
        return 0;
    }
    return (n * (n - 1) * (n - 2)) / 6;
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i{}; i < n; i++)
    {
        int l;
        cin >> l;
        mp[l]++;
    }

    int ans = 0, cnt{};
    for (auto &it : mp)
    {
        ans += nc3(it.second);
        if (it.second > 1)
        {
            ans += (it.second * (it.second - 1) / 2) * cnt;
        }
        cnt += it.second;
    }

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