#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), v1(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    for (auto &it : v1)
    {
        cin >> it;
    }

    map<int, int> mp, mp1;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            mp[v[i - 1]] = max(cnt, mp[v[i - 1]]);
            break;
        }
        if (v[i] == v[i - 1])
        {
            cnt++;
        }
        else
        {
            mp[v[i - 1]] = max(cnt, mp[v[i - 1]]);
            cnt = 1;
        }
    }

    cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            mp1[v1[i - 1]] = max(cnt, mp1[v1[i - 1]]);
            break;
        }
        if (v1[i] == v1[i - 1])
        {
            cnt++;
        }
        else
        {
            mp1[v1[i - 1]] = max(cnt, mp1[v1[i - 1]]);
            cnt = 1;
        }
    }

    int ans = 0;

    for (auto &it : v)
    {
        ans = max(ans, mp[it] + mp1[it]);
    }
    for (auto &it : v1)
    {
        ans = max(ans, mp[it] + mp1[it]);
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}