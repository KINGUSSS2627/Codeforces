#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;

int dfs(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &val)
{
    vis[node] = 1;
    int cnt = 0;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            cnt += dfs(it, adj, vis, val);
        }
    }
    if (cnt != 0)
        return val[node] = cnt;
    return val[node] = 1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n + 1, 0), val(n + 1, 0);
        dfs(1, adj, vis, val);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << val[x] * val[y] << endl;
        }
    }
    return 0;
}