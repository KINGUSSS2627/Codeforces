//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int idx = min_element(v.begin(), v.end()) - v.begin();
    if (is_sorted(v.begin() + idx, v.end()))
    {
        cout << idx << endl;
    }
    else
    {
        cout << -1 << endl;
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