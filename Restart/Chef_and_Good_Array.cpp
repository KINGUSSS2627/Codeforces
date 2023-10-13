#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
bool bs(int low, int high, vector<int> &v, int sum)
{
    if (low <= high)
    {
        int mid = ((high - low) >> 1);
        if (v[mid] == sum)
        {
            return 1;
        }
        else if (v[mid] < sum)
        {
            bs(mid, high, v, sum);
        }
        else
        {
            bs(low, mid, v, sum);
        }
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end());
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mp[v[i] + v[j]]++;
        }
    }
    int ans = 0, sum = 0;
    for (auto &it : mp)
    {
        if (ans < it.second)
        {
            ans = it.second;
            sum = it.first;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (!bs(0, n - 1, v, sum - v[i]))
            cnt++;
    }
    cout << cnt << endl;
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