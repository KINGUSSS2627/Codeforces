//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int neededx(int it, int x)
{
    return (x - it % x) % x;
}
int neededy(int it, int y)
{
    return (it % y) % y;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    map<pair<int, int>, int> mp;

    int ans = 1;

    for (auto &it : v)
    {
        ans += mp[{neededx(it, x), neededy(it, y)}];
        mp[{it % x, it % y}]++;
    }

    cout << ans - 1 << endl;
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