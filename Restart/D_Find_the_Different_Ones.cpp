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

    int q;
    cin >> q;
    vector<int> u;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
        {
            u.push_back(i - 1);
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int idx1 = lower_bound(u.begin(), u.end(), l) - u.begin();
        int idx2 = lower_bound(u.begin(), u.end(), r) - u.begin();

        if (idx1 < idx2)
        {
            cout << u[idx1] + 1 << " " << u[idx1] + 2 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
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