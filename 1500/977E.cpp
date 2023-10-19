#include <bits/stdc++.h>
using namespace std;

int cntCycles = 0;

void bfs(int i, vector<vector<int>> &v, vector<int> &vis)
{
    queue<int> q;

    bool isCycle = 0, f = 1;

    q.push(i);
    vis[i] = 1;

    while (!q.empty())
    {
        int x = q.front();

        if (v[x].size() != 2)
        {
            f = 0;
        }

        q.pop();

        for (auto &it : v[x])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
            else if (it != x)
            {
                isCycle = 1;
            }
        }
    }

    isCycle = isCycle & f;
    if (isCycle)
    {
        cntCycles++;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> vis(v.size() + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            bfs(i, v, vis);
    }

    cout << cntCycles << endl;
}

int main()
{
    solve();
    return 0;
}