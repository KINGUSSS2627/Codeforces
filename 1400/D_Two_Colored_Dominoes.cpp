//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (auto &it : v)
    {
        for (auto &j : it)
        {
            cin >> j;
        }
    }

    vector<int> rows(n, 0);
    vector<int> cols(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 'L')
            {
                if (cols[j] <= 0)
                {
                    v[i][j] = 'W';
                    v[i][j + 1] = 'B';
                    cols[j]++, cols[j + 1]--;
                }
                else
                {
                    v[i][j] = 'B';
                    v[i][j + 1] = 'W';
                    cols[j]--, cols[j + 1]++;
                }
            }
            else if (v[i][j] == 'U')
            {
                if (rows[i] <= 0)
                {
                    v[i][j] = 'W';
                    v[i + 1][j] = 'B';
                    rows[i]++, rows[i + 1]--;
                }
                else
                {
                    v[i][j] = 'B';
                    v[i + 1][j] = 'W';
                    rows[i]--, rows[i + 1]++;
                }
            }
        }
    }

    bool f = 0;
    for (auto &it : rows)
    {
        if (it)
        {
            f = 1;
            break;
        }
    }

    for (auto &it : cols)
    {
        if (it || f)
        {
            f = 1;
            break;
        }
    }

    // for (auto &it : rows)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // for (auto &it : cols)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    if (f)
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto &it : v)
        {
            for (auto &j : it)
            {
                cout << j;
            }
            cout << endl;
        }
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