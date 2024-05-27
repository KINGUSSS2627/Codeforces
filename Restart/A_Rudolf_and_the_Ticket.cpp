//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> l(n), r(m);

    for (auto &it : l)
    {
        cin >> it;
    }

    for (auto &it : r)
    {
        cin >> it;
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (l[i] + r[j] <= k)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
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