//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        vector<int> ans;
        while (1)
        {
            int minn = *min_element(v.begin(), v.end());
            int maxx = *max_element(v.begin(), v.end());
            int d = minn;

            if (maxx == minn)
            {
                break;
            }

            for (int i = 0; i < n; i++)
            {
                v[i] = (v[i] + d) / 2;
            }
            ans.push_back(d);
        }

        if (ans.size() > n)
        {
            cout << ans.size() << endl;
        }
        else
        {
            cout << ans.size() << endl;
            for (auto &it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
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