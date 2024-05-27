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

    sort(v.begin(), v.end());
    vector<int> tmp;
    tmp.push_back(v[0]);

    int ans = 0, prev = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > prev)
        {
            prev = v[i];
            tmp.push_back(v[i]);
        }
    }

    // for (auto &it : tmp)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    for (int i = 0; i < tmp.size(); i++)
    {
        int curr = tmp[i];
        int res = 1;

        int idx = upper_bound(tmp.begin(), tmp.end(), curr + n - 1) - tmp.begin();
        idx--;

        ans = max(ans, idx - i + 1);
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