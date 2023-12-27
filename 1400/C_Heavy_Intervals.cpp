//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n, 0);
    multiset<int> r;

    for (auto &it : l)
    {
        cin >> it;
    }

    for (int i{}; i < n; i++)
    {
        int rr;
        cin >> rr;
        r.insert(rr);
    }

    vector<int> c(n, 0);
    for (auto &it : c)
    {
        cin >> it;
    }

    sort(l.begin(), l.end(), greater<int>());
    sort(c.begin(), c.end(), greater<int>());

    vector<int> intr;
    for (int i{}; i < n; i++)
    {
        auto it = r.upper_bound(l[i]);
        int val = *it;
        r.erase(it);

        intr.push_back(val - l[i]);
    }

    sort(intr.begin(), intr.end());

    int ans = 0;

    for (int i{}; i < n; i++)
    {
        ans += intr[i] * c[i];
    }

    cout << ans << endl;
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