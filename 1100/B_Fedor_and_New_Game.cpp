#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1, 0);
    for (auto &it : v)
    {
        cin >> it;
    }
    int cntfriend = 0;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            int t1 = v[i], t2 = v[m];
            if (((t1 >> j) & 1) != ((t2 >> j) & 1))
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            cntfriend++;
        }
    }
    cout << cntfriend << endl;
    return 0;
}