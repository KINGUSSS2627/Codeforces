//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    sort(v.begin(), v.end());
    if (k > 2)
    {
        cout << 0 << endl;
    }
    else if (k == 2)
    {
        int ans = INT64_MAX;
        int minn = INT64_MAX;

        set<int> diff;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                diff.insert(abs(v[i] - v[j]));
                minn = min(minn, abs(v[i] - v[j]));
            }
        }

        for (auto &it : v)
        {
            auto tmp = diff.lower_bound(it);
            if (tmp == diff.end())
            {
                tmp--;
            }

            if (tmp != diff.begin())
            {
                auto tmp1 = tmp;
                tmp1--;
                ans = min(ans, abs(*tmp1 - it));
            }
            auto tmp2 = tmp;
            advance(tmp2, 1);
            if (tmp2 != diff.end())
            {
                ans = min(ans, abs(*tmp2 - it));
            }
            ans = min(ans, abs(*tmp - it));
            ans = min(ans, *min_element(v.begin(), v.end()));
        }
        cout << min(ans, minn) << endl;
    }
    else
    {
        int minn = INT64_MAX;
        for (int i = 1; i < n; i++)
        {
            minn = min(minn, abs(v[i] - v[i - 1]));
        }
        minn = min(minn, *min_element(v.begin(), v.end()));
        cout << minn << endl;
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