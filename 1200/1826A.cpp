#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    map<int, int> mp;
    for (auto &it : v)
    {
        cin >> it;
        mp[it]++;
    }

    sort(v.begin(), v.end());

    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] > i)
            {
                cnt++;
            }
        }

        if (cnt == i)
        {
            cout << i << endl;
            f = 1;
            break;
        }
    }

    if (!f)
    {
        cout << -1 << endl;
    }
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