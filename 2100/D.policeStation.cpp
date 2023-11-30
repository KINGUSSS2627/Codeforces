#include <bits/stdc++.h>
#define int long long
using namespace std;

void bfs(queue<pair<int, int>> &q, vector<int> &vis, vector<vector<pair<int, int>>> &adj, set<int> &st)
{
    while (!q.empty())
    {
        auto tp = q.front();
        q.pop();

        for (auto &it : adj[tp.first])
        {
            if (!vis[it.first])
            {
                vis[it.first] = 1;
                q.push({it.first, tp.first});
                st.erase(it.second);
            }
        }
    }

    cout << st.size() << endl;
    for (auto &it : st)
    {
        cout << it + 1 << " ";
    }
}

int32_t main()
{
    int n, d, k;
    cin >> n >> k >> d;
    queue<pair<int, int>> q;
    vector<int> v(k), vis(n + 1, 0);

    for (auto &it : v)
    {
        cin >> it;
        q.push({it, 0});
        vis[it] = 1;
    }

    vector<vector<pair<int, int>>> adj(n + 1);
    set<int> st;
    for (int i = 0; i < n - 1; i++)
    {
        int l, r;
        cin >> l >> r;
        adj[l].push_back({r, i});
        adj[r].push_back({l, i});
        st.insert(i);
    }

    bfs(q, vis, adj, st);
    return 0;
}