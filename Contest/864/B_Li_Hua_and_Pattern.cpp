#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> v(n, vector<int>(n, 0));
    vector<vector<int>> v1(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            v1[n - 1 - i][n - 1 - j] = v[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] != v1[i][j])
            {
                cnt++;
            }
        }
    }
    cnt /= 2;
    // cout << cnt << endl;
    if (n == 1)
        cout << "YES" << endl;
    else if ((cnt <= k && (n & 1)) || (((cnt - k) % 2 == 0) && (cnt <= k) && (n % 2 == 0)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
        solve();
    }
    return 0;
}