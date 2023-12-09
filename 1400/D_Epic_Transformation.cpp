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

    priority_queue<pair<int, int>> pq;
    for (auto &it : mp)
    {
        pq.push({it.second, it.first});
    }

    int ans = n;

    while (pq.size() > 1)
    {
        auto a = pq.top();
        pq.pop();

        auto b = pq.top();
        pq.pop();

        if (a.first - 1)
        {
            pq.push({a.first - 1, a.second});
        }
        if (b.first - 1)
        {
            pq.push({b.first - 1, b.second});
        }
        ans -= 2;
    }

    cout << ans << endl;
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