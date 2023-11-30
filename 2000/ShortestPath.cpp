// 59E
#include <bits/stdc++.h>
#define int long long
using namespace std;

void bfs(int n, int idx, vector<vector<int>> &adj, set<pair<int, pair<int, int>>> &st, vector<vector<int>> &dist)
{
    queue<pair<int, int>> q;
    q.push({idx, 0});
    dist[0][1] = 0;
    while (!q.empty())
    {
        auto curr = q.front();
        int node = curr.first;
        int par = curr.second;
        q.pop();

        for (auto &it : adj[node])
        {
            if (st.find({par, {node, it}}) == st.end() && dist[node][it] > dist[par][node] + 1)
            {
                q.push({it, node});
                dist[node][it] = dist[par][node] + 1;
            }
        }
    }
}

int32_t main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;

        adj[l].push_back(r);
        adj[r].push_back(l);
    }

    set<pair<int, pair<int, int>>> v;
    for (int i = 0; i < k; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.insert({a, {b, c}});
    }

    vector<vector<int>> dist(n + 1, vector<int>(n + 1, INT_MAX));

    bfs(n, 1, adj, v, dist);

    int res = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        res = min(res, dist[i][n]);
    }
    if (res == INT_MAX)
    {
        res = -1;
    }
    cout << res << endl;
    if (res != -1)
    {
        vector<int> ans;
        int last = n;
        ans.push_back(last);
        while (last != 1)
        {
            for (int i = 1; i <= n; i++)
            {
                if (dist[i][last] == res)
                {
                    res--;
                    last = i;
                    ans.push_back(last);
                }
            }
        }

        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
    }
    return 0;
}