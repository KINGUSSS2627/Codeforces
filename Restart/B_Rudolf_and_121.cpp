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

    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] < 0)
        {
            cout << "NO" << endl;
            return;
        }
        v[i + 1] -= 2 * v[i];
        v[i + 2] -= v[i];
        v[i] = 0;
    }

    if (v[n - 2] != 0 || v[n - 1] != 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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