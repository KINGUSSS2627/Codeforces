//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n), e(n);

    for (auto &it : v)
    {
        cin >> it;
    }
    for (auto &it : e)
    {
        cin >> it;
    }

    int ans = 0, mb = 0, maxx = 0;
    int j = 0;
    while (j < n)
    {
        if (k == j)
        {
            break;
        }
        ans += v[j];
        mb = max(mb, e[j]);
        maxx = max(ans + (k - j - 1) * mb, maxx);
        j++;
    }

    cout << maxx << endl;
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