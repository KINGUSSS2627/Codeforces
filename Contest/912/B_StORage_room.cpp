#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for (auto &it : v)
    {
        for (auto &itt : it)
        {
            cin >> itt;
        }
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int res = pow(2, 30) - 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                res &= v[i][j];
            }
        }
        ans.push_back(res);
    }

    // for (auto &it : ans)
    // {
    //     if (it > pow(2, 25))
    //     {
    //         it = pow(2, 20) - 1;
    //     }
    // }

    bool flag = 1;
    vector<vector<int>> copy(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                copy[i][j] = ans[i] | ans[j];
                if (copy[i][j] != v[i][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}