//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> m >> n;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (auto &it : v)
    {
        for (auto &itt : it)
        {
            cin >> itt;
        }
    }

    vector<int> indegree(m + 2, 0);
    vector<vector<int>> adj(m + 1);
    vector<int> ts;

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < m; j++)
        {
            adj[v[i][j - 1]].push_back(v[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < m; j++)
        {
            indegree[v[i][j]]++;
        }
    }

    queue<int> q;
    for (int i = 1; i <= m; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (indegree[i] == 0)
        {
            ts.push_back(i);
        }
    }

    while (!q.empty())
    {
        int tp = q.front();
        q.pop();

        for (auto &it : adj[tp])
        {
            indegree[it]--;
            if (indegree[it] != 0)
            {
                continue;
            }
            else
            {
                q.push(it);
                ts.push_back(it);
            }
        }
    }

    if (ts.size() != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}