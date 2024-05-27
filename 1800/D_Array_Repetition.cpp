//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> op(n);
    vector<int> size(n, 0);
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> op[i].first >> op[i].second;

        size[i] = idx;
        if (idx != 1e18)
        {
            if (op[i].first == 1)
            {
                idx++;
            }
            else
            {
                if (idx < 1e18 / (op[i].second + 1))
                    idx *= (op[i].second + 1);
                else
                    idx = 1e18;
            }
        }
    }

    vector<int> v(q);
    for (auto &it : v)
    {
        cin >> it;
        it--;

        while (1)
        {
            int ind = upper_bound(size.begin(), size.end(), it) - size.begin();
            ind--;

            if (ind >= 0 && op[ind].first == 1)
            {
                cout << op[ind].second << " ";
                break;
            }

            it %= size[ind];
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