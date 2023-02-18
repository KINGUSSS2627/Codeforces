#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
// int solve(int n, int m, int &sum, vector<vector<int>> &v, vector<vector<vector<int>>> &dp)
// {
//     if (n == 0 && m == 0)
//     {
//         sum += v[n][m];
//         if (sum == 0)
//             return 1;
//         sum -= v[n][m];
//         return 0;
//     }
//     if (n < 0 || m < 0)
//         return 0;
//     sum += v[n][m];
//     int up = solve(n - 1, m, sum, v, dp);
//     int left = solve(n, m - 1, sum, v, dp);
//     if (up == 0 && left == 0)
//         sum -= v[n][m];
//     return up + left;
// }
// bool fix(int n, int m, vector<vector<int>> &v)
// {
//     int sum = 0;
//     vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(n * m + 1, -1)));
//     int flag = solve(n - 1, m - 1, sum, v, dp);
//     if (sum == 0 && flag != 0)
//         return true;
//     return false;
// }

int f_tab(int n, int m, vector<vector<int>> &v)
{
    if (!((n + m) & 1))
    {
        cout << "NO" << endl;
        return 0;
    }
    int lo[n][m], hi[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                lo[i][j] = hi[i][j] = v[i][j];
            }
            else if (i == 0)
            {
                lo[i][j] = v[i][j] + lo[i][j - 1];
                hi[i][j] = v[i][j] + hi[i][j - 1];
            }
            else if (j == 0)
            {
                lo[i][j] = v[i][j] + lo[i - 1][j];
                hi[i][j] = v[i][j] + hi[i - 1][j];
            }
            else
            {
                lo[i][j] = v[i][j] + min(lo[i][j - 1], lo[i - 1][j]);
                hi[i][j] = v[i][j] + max(hi[i][j - 1], hi[i - 1][j]);
            }
        }
    }
    if (lo[n - 1][m - 1] <= 0 && hi[n - 1][m - 1] >= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        // if (fix(n, m, v))
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
        f_tab(n, m, v);
    }
    return 0;
}