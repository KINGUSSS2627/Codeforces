#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m, '0'));
    for (auto &it : v)
    {
        for (auto &i : it)
        {
            cin >> i;
        }
    }

    string name = "vika";
    int k = 0, flag = 0;

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i][j] == name[k])
            {
                k++;
                if (k == name.size())
                {
                    flag = 1;
                }
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}