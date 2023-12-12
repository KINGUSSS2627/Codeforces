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

    vector<int> pref;
    pref.push_back(0);
    for (int i = 0; i < n; i++)
    {
        pref.push_back(pref.back() + v[i]);
    }

    int maxi = INT_MIN;
    for (int d = 1; d <= n; ++d)
    {
        if (n % d == 0)
        {
            int maxx = INT64_MIN, minn = INT64_MAX;
            for (int i = 0; i < n; i += d)
            {
                int sum = 0;
                sum += pref[i + d] - pref[i];
                maxx = max(maxx, sum);
                minn = min(minn, sum);
            }
            maxi = max(maxi, maxx - minn);
        }
    }
    cout << max(maxi, *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end())) << endl;
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