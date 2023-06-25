#include <bits/stdc++.h>
using namespace std;
#define int long long
void Dijaktras(int src, vector<vector<pair<int, int>>> &adj)
{
    int n = adj.size();

    vector<int> dist(n + 1, 1e18);
    dist[src] = 0;

    vector<int> parent(n + 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, src});
    while (!pq.empty())
    {
        auto curr = pq.top();
        pq.pop();

        int wt = curr.first;
        int node = curr.second;

        for (auto &it : adj[node])
        {
            if (dist[it.first] > wt + it.second)
            {
                dist[it.first] = wt + it.second;
                pq.push({dist[it.first], it.first});
                parent[it.first] = node;
            }
        }
    }

    if (dist[n - 1] == 1e18)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> ans;
        int node = n - 1;
        while (parent[node] != node)
        {
            ans.push_back(node);
            node = parent[node];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
        for (auto &it : ans)
        {
            cout << " " << it;
        }
        cout << endl;
    }
}

void addEdge(vector<vector<pair<int, int>>> &adj, int u, pair<int, int> v)
{
    adj[u].push_back(v);
    adj[v.first].push_back({u, v.second});
}
int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        addEdge(adj, u, {v, wt});
    }

    Dijaktras(1, adj);
    return 0;
}