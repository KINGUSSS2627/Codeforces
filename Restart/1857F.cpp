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

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        float rt = sqrtf(a * a - 4 * b);
        if (rt - (int)rt != 0)
        {
            cout << ans << " ";
            continue;
        }
        else
        {
            int aa = (a + sqrtl((a * a - 4 * b))) / 2;
            int bb = (a - sqrtl((a * a - 4 * b))) / 2;
            if (mp.find(aa) == mp.end() || mp.find(bb) == mp.end())
            {
                cout << ans << endl;
                continue;
            }
            else if (aa == bb)
            {
                ans = (mp[aa] * (mp[aa] - 1)) / 2;
            }
            else
            {
                ans = (mp[aa] * mp[bb]);
            }
            cout << ans << " ";
        }
    }
    cout << endl;
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

