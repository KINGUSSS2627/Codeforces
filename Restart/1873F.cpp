#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    // vector<int> a(n, 0), h(n, 0);
    vector<pair<int, int>> ah(n, {0, 0});

    for (auto &it : ah)
    {
        cin >> it.first;
    }
    for (auto &it : ah)
    {
        cin >> it.second;
    }

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + ah[i - 1].first;
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << pref[i] << " ";
    // }
    // cout << endl;

    int l = 0, r = 0;

    vector<pair<int, int>> pr;
    for (int i = 1; i < n; i++)
    {
        if (ah[i - 1].second % ah[i].second == 0)
        {
            r = i;
        }
        else
        {
            pr.push_back({l, r});
            l = i;
            r = i;
        }
    }
    pr.push_back({l, r});

    int minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minn = min(minn, ah[i].first);
    }
    if (minn > k)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 1;
    for (int i = 0; i < pr.size(); i++)
    {
        int val = pref[pr[i].second + 1] - pref[pr[i].first];
        if (val <= k)
        {
            ans = max(ans, pr[i].second - pr[i].first + 1);
        }
        else if (pr[i].second - pr[i].first + 1 > ans)
        {
            for (int j = pr[i].first; j <= pr[i].second; j++)
            {
                for (int x = j + ans; x <= pr[i].second; x++)
                {
                    if (pref[x + 1] - pref[j] <= k)
                    {
                        ans = max(ans, x - j + 1);
                    }
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}