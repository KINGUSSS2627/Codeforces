#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag = true;
        for (auto &it : v)
        {
            cin >> it;
        }
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && v[i] != v[i - 1])
                flag = false;
        }

        if (flag || n == 1)
            cout << 0 << endl;
        else
        {
            int cnt = 0;
            vector<pair<int, int>> res;
            while (!flag && cnt < 30 * n)
            {
                int minn = min_element(v.begin(), v.end()) - v.begin();
                for (int i = 0; i < n; i++)
                {
                    if (v[i] != v[minn])
                    {
                        cnt++;
                        v[i] = (v[i] + v[minn] - 1) / v[minn];
                        res.push_back({i + 1, minn + 1});
                    }
                }
                flag = true;
                for (int i = 0; i < n; i++)
                {
                    if (i && v[i] != v[i - 1])
                        flag = false;
                }
            }
            if (!flag)
                cout << -1 << endl;
            else
            {
                cout << res.size() << endl;
                for (auto &it : res)
                {
                    cout << it.first << " " << it.second << endl;
                }
            }
        }
    }
    return 0;
}