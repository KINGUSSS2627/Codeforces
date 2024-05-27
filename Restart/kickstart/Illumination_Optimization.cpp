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
    int k = 1;
    tc
    {
        int m, r, n;
        cin >> m >> r >> n;
        vector<int> x(n);
        bool flag = 0;
        for (auto &it : x)
        {
            cin >> it;
        }
        for (int i = 1; i < n; i++)
        {
            if (x[i] - x[i - 1] > 2 * r)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            if (x[0] > r || (m - x[n - 1]) > r)
                flag = 1;
        }
        if (flag)
        {
            cout << "Case #" << k << ": "
                 << "IMPOSSIBLE" << endl;
        }
        else
        {
            vector<pair<int, int>> ans;
            for (int i = 0; i < n; i++)
            {
                int t1 = max((int)0, (x[i] - r));
                int t2 = min(m, (x[i] + r));
                ans.push_back({t1, t2});
            }
            int cnt = 1;
            int i = 0;
            while (ans[i].first == 0)
            {
                i++;
                if (i == n)
                    break;
            }
            i--;
            int mini = 0;
            int maxi = ans[i].second;
            i++;
            for (i; i < n; i++)
            {
                if (maxi >= m)
                {
                    break;
                }
                int j = i;
                while (ans[j].first <= maxi)
                {
                    j++;
                    if (j == n)
                        break;
                }
                if (j != i)
                {
                    cnt++;
                    j--;
                }
                maxi = ans[j].second;
                i = j;
            }
            cout << "Case #" << k << ": "
                 << cnt << endl;
        }
        k++;
    }
    return 0;
}