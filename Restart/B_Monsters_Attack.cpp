//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> x(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : x)
    {
        cin >> it;
    }
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp[abs(x[i])] == 0)
        {
            mp[abs(x[i])] = a[i];
        }
        else
        {
            mp[abs(x[i])] += a[i];
        }
    }

    bool f = 1;
    int bullet = 0;
    int prev = 0;
    for (auto &it : mp)
    {
        bullet += (it.first - prev) * k;
        bullet -= it.second;

        if (bullet < 0)
        {
            f = 0;
            break;
        }
        prev = it.first;
    }

    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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