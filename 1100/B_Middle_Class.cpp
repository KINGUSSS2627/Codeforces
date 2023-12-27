//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    sort(v.begin(), v.end());
    int cnt = 1, sum = v[n - 1];
    if (sum / (cnt * 1.0) < x)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sum += v[i];
        cnt++;
        if (sum / (cnt * 1.0) < x)
        {
            cout << cnt - 1 << endl;
            return;
        }
    }
    cout << cnt << endl;
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