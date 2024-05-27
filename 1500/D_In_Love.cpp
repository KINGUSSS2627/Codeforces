//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    multiset<pair<int, int>> stlr, strl;

    for (int i = 0; i < n; i++)
    {
        char ch;
        int x, y;
        cin >> ch >> x >> y;
        bool f = 1;
        if (ch == '+')
        {
            stlr.insert({x, y});
            strl.insert({y, x});
        }
        else
        {
            auto it1 = stlr.find({x, y});
            auto it2 = strl.find({y, x});

            stlr.erase(it1);
            strl.erase(it2);
        }

        auto lmax = stlr.empty() ? stlr.end() : prev(stlr.end());
        auto rmin = strl.empty() ? strl.end() : strl.begin();

        // cout << (*lmax).first << " " << (*rmin).first << endl;
        if ((*rmin).first >= (*lmax).first || strl.size() == 0)
        {
            f = 0;
        }

        f ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}