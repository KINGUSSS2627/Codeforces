//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isOk(int i, int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 0));
    for (auto &it : v)
    {
        for (auto &i : it)
        {
            cin >> i;
        }
    }

    vector<vector<int>> ans = v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int maxi = INT_MIN;
            vector<int> dx = {-1, 1, 0, 0};
            vector<int> dy = {0, 0, -1, 1};
            for (int k = 0; k < 4; k++)
            {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if (isOk(nx, ny, n, m))
                {
                    maxi = max(maxi, v[nx][ny]);
                }
            }
            if (v[i][j] > maxi)
                ans[i][j] = maxi;
        }
    }

    for (auto &it : ans)
    {
        for (auto &i : it)
        {
            cout << i << " ";
        }
        cout << endl;
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