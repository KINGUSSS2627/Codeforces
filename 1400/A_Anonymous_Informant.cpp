//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    bool ans = 1;
    k = min(k, n);
    int j = n - 1;
    while (k--)
    {
        if (v[j] > n)
        {
            ans = 0;
            break;
        }

        j += (n - v[j]);
        j %= n;
    }
    ans ? cout << "YES" << endl : cout << "NO" << endl;
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
