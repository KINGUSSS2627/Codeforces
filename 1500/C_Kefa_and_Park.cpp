#include <bits/stdc++.h>
using namespace std;
void dfs(int i, int parentNode, vector<vector<int>> &adj, vector<int> &cat, int m, int TempCnt, int maxx, map<int, int> &mp)
{

    if (cat[i])
        TempCnt++;
    else
        TempCnt = 0;
    maxx = max(maxx, TempCnt);

    for (auto &x : adj[i])
    {
        if (x == parentNode)
            continue;
        dfs(x, i, adj, cat, m, TempCnt, maxx, mp);
    }
    if (i != 1 && adj[i].size() == 1)
    {
        if (maxx > m)
        {
            mp[i] = 0;
        }
        else
        {
            mp[i] = 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> cat(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cat[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    map<int, int> mp;
    dfs(1, -1, adj, cat, m, 0, 0, mp);

    int sum = 0;
    for (auto it : mp)
    {
        if (it.second)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}