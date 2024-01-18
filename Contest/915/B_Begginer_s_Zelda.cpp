//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    vector<int> o(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        o[l]++;
        o[r]++;
    }
    int cnt = 0;
    for (auto &it : o)
    {
        if (it == 1)
        {
            cnt++;
        }
    }

    cout << (cnt + 1) / 2 << endl;
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