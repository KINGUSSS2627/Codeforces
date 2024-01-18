//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isOk(int i, int j)
{
    return i >= 0 && i < 3 && j >= 0 && j < 3;
}

vector<vector<int>> vis(3, vector<int>(3, 0));
vector<int> dx = {1, 0, -1, 0, 1, -1, 1, -1};
vector<int> dy = {0, -1, 0, 1, -1, -1, 1, 1};
string ans = "CCC";

void findMin(int x, int y, vector<vector<char>> &v, string cur)
{
    cur += v[x][y];
    if (cur.size() == 3)
    {
        ans = min(ans, cur);
        return;
    }
    int i;
    vis[x][y] = true;
    for (i = 0; i < 8; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3 && (!vis[nx][ny]))
        {
            findMin(nx, ny, v, cur);
        }
    }
    vis[x][y] = false;
    return;
}

void solve()
{
    vector<vector<char>> v(3, vector<char>(3));
    for (int i{}; i < 3; i++)
    {
        for (int j{}; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i{}; i < 3; i++)
    {
        for (int j{}; j < 3; j++)
        {
            string curr = "";
            findMin(i, j, v, curr);
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    solve();
    return 0;
}