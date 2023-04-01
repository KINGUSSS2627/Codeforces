#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
        vector<vector<int>> v(2, vector<int>(2, 0));
        v[0][0] = 0, v[0][1] = 1, v[1][0] = 1, v[1][1] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ((i + 1) / 2 + (j + 1) / 2) % 2 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}