#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m, '#'));

    bool f = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        if (!f)
        {
            for (int j = 0; j < m - 1; j++)
            {
                v[i][j] = '.';
            }
            f = 1;
        }
        else
        {
            for (int j = 1; j < m; j++)
            {
                v[i][j] = '.';
            }
            f = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}