//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> v(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }

    int cnt{};

    for (int i{}; i < (1 << n); i++)
    {
        int minn = INT_MAX, maxx = 0, sum = 0;

        for (int j{0}; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                minn = min(minn, v[j]);
                maxx = max(maxx, v[j]);
                sum += v[j];
            }
        }

        if (sum >= l && sum <= r && maxx - minn >= x)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
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