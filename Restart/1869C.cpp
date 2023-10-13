#include <bits/stdc++.h>
using namespace std;

void printvec(vector<vector<int>> &v)
{
    for (auto &it : v)
    {
        for (auto &it1 : it)
        {
            cout << it1 << " ";
        }
        cout << endl;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n * m == 1)
    {
        cout << 0 << endl;
        cout << 0 << endl;
    }
    else if (m == 1)
    {
        cout << 0 << endl;
        int i = n;
        while (i--)
        {
            cout << 0 << endl;
        }
    }
    else if (n == 1)
    {
        cout << 2 << endl;
        int i = m - 1;
        while (i >= 0)
        {
            cout << i << " ";
            i--;
        }
        cout << endl;
    }
    else    
    {
        int rep = max(0, n - (m - 2));
        vector<vector<int>> ans(n, vector<int>(m, -1));
        for (int i = 0; i < m; i++)
        {
            int cnt = 0, x = i;
            for (int j = 0; j < n; j++)
            {
                if (x == m)
                {
                    x = 0;
                }
                if (cnt < rep)
                {
                    ans[j][i] = x;
                    cnt++;
                }
                else
                {
                    ans[j][i] = (x + 1) % m;
                    x++;
                }
            }
        }
        if (!rep)
        {
            cout << n + 1 << endl;
        }
        else
        {
            cout << m << endl;
        }
        printvec(ans);
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}