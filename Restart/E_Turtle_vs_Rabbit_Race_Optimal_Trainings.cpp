//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
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

    vector<int> pref;
    pref.push_back(0);

    for (auto &it : v)
    {
        pref.push_back(it + pref.back());
    }

    // for (auto &it : pref)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    int q;
    cin >> q;
    while (q--)
    {
        int l, u;
        cin >> l >> u;
        l--;

        int power = pref[l] + u + 1;

        int ind = lower_bound(pref.begin(), pref.end(), power) - pref.begin();
        ind--;

        {
        if (ind == n)
            cout << n << " ";
            continue;
        }

        if (abs(u + pref[l] - pref[ind]) < abs(u + pref[l] - pref[ind + 1]))
        {
            int ans = max(l + 1, ind);
            cout << ans << " ";
        }
        else
        {
            int ans = max(l + 1, ind + 1);
            cout << ans << " ";
        }
    }
    cout << endl;
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