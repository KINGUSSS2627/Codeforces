#include <bits/stdc++.h>
using namespace std;

int rec(int ind, int k, int z, int l, vector<int> &v, map<pair<pair<int, int>, pair<int, int>>, int> &dp)
{
    if (k == 0)
    {
        return v[ind];
    }

    if (ind < 0 || ind >= v.size())
    {
        return -1e9;
    }

    if (dp.find({{ind, k}, {z, l}}) != dp.end())
    {
        return dp[{{ind, k}, {z, l}}];
    }

    int left = -1e9, right = -1e9;

    if (ind > 0 && l && z)
    {
        left = v[ind] + rec(ind - 1, k - 1, z - 1, 0, v, dp);
    }

    if (ind < v.size() - 1)
    {
        right = v[ind] + rec(ind + 1, k - 1, z, 1, v, dp);
    }

    return dp[{{ind, k}, {z, l}}] = max(left, right);
}

void solve()
{
    int n, k, z;
    cin >> n >> k >> z;
    vector<int> v(n);

    for (auto &it : v)
    {
        cin >> it;
    }

    map<pair<pair<int, int>, pair<int, int>>, int> dp;
    cout << rec(0, k, z, 1, v, dp) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}