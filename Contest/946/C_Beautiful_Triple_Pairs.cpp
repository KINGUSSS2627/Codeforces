//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;

    map<vector<int>, int> cnt1, cnt2;

    for (int i = 2; i < n; i++)
    {
        ans += cnt2[{0, v[i - 1], v[i]}] + cnt2[{v[i - 2], 0, v[i]}] + cnt2[{v[i - 2], v[i - 1], 0}] - 3 * cnt1[{v[i - 2], v[i - 1], v[i]}];

        cnt2[{0, v[i - 1], v[i]}]++;
        cnt2[{v[i - 2], 0, v[i]}]++;
        cnt2[{v[i - 2], v[i - 1], 0}]++;
        cnt1[{v[i - 2], v[i - 1], v[i]}]++;
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