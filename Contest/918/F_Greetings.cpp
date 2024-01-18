//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long int
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    vector<int> end(n);
    for (int i{}; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    ordered_set<int> ost;
    int ans = 0;
    for (auto &it : v)
    {
        ans += ost.size() - ost.order_of_key(it.second);
        ost.insert(it.second);
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
