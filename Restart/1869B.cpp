#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<int, int>> vp(n);
    for (auto &it : vp)
    {
        cin >> it.first >> it.second;
    }

    int dd = abs(vp[a - 1].first - vp[b - 1].first) + abs(vp[a - 1].second - vp[b - 1].second);
    auto start = vp[a - 1], end = vp[b - 1];
    if (a <= k && b <= k)
    {
        cout << 0 << endl;
    }
    else if (k == 0)
    {
        cout << dd << endl;
    }
    else
    {
        vector<int> disa, disb;
        for (int i = 0; i < k; i++)
        {
            disa.push_back(abs(vp[i].first - vp[a - 1].first) + abs(vp[i].second - vp[a - 1].second));
            disb.push_back(abs(vp[i].first - vp[b - 1].first) + abs(vp[i].second - vp[b - 1].second));
        }

        sort(disa.begin(), disa.end());
        sort(disb.begin(), disb.end());

        cout << min(disa[0] + disb[0], dd) << endl;
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