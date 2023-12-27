//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans = 0;

void findChilds(int idx, vector<vector<int>> &adj, vector<int> &vis, vector<int> &nodeCnt)
{
    vis[idx] = 1;
    nodeCnt[idx]++;
    for (auto &it : adj[idx])
    {
        if (!vis[it])
        {
            findChilds(it, adj, vis, nodeCnt);
            nodeCnt[idx] += nodeCnt[it];
        }
    }
}

void findPairs(int i, int rem, vector<int> &nodeCnt, vector<vector<int>> &adj)
{
    if (rem)
    {
        ans++;
        rem--;
        // cout << ans << " " << rem << "$" << endl;
    }

    int totalNode = nodeCnt[i] - 1;
    for (auto &it : adj[i])
    {
        findPairs(it, rem + totalNode - nodeCnt[it], nodeCnt, adj);
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);

    for (int i = 1; i < n; i++)
    {
        int l;
        cin >> l;
        adj[l].push_back(i + 1);
    }

    vector<int> vis(n + 1, 0), nodeCnt(n + 1, 0);
    findChilds(1, adj, vis, nodeCnt);

    findPairs(1, 0, nodeCnt, adj);
    cout << ans / 2 << endl;

    // for (auto &it : nodeCnt)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        ans = 0;
    }
    return 0;
}