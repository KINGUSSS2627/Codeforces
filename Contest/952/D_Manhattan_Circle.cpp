//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    int nx = 0, ny = 0, cnt = 0;
    vector<vector<char>> v(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == '#')
            {
                nx += i;
                ny += j;
                cnt++;
            }
        }
    }

    cout << nx / cnt + 1 << " " << ny / cnt + 1 << endl;
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