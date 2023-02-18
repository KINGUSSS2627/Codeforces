#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define ret0 return 0;
using namespace std;

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
        int mx = INT_MIN, p = 1, q = 1;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
                if (v[i][j] > mx)
                {
                    mx = v[i][j];
                    p = i, q = j;
                }
            }
        }
        cout << max(p + 1, n + 1 - p - 1) * max(q + 1, m + 1 - q - 1) << endl;
    }
    ret0
}