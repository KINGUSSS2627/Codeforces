//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n), sum(n, 0), maxx(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxx[i] = max(v[i], maxi);
        maxi = max(v[i], maxi);
    }

    sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] += sum[i - 1] + v[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum[i] - maxx[i] == maxx[i])
        {
            cnt++;
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