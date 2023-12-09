//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    vector<int> pref(n + 1, 0);
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = v[i - 1].first + pref[i - 1];
    }

    vector<int> ans(n, 0);
    ans[v[n - 1].second] = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i].first == v[i + 1].first)
        {
            ans[v[i].second] = ans[v[i + 1].second];
        }
        else if (pref[i + 1] >= v[i + 1].first)
        {
            ans[v[i].second] = ans[v[i + 1].second];
        }
        else
        {
            ans[v[i].second] = i;
        }
    }
    return ans;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> ans = solve();
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}