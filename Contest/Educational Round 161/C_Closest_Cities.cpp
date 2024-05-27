//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
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

    vector<int> pref, suff(n, 0);
    pref.push_back(0);
    pref.push_back(1);

    for (int i{1}; i < n; i++)
    {
        if (v[i] - v[i - 1] < v[i + 1] - v[i])
        {
            pref.push_back(pref.back() + v[i + 1] - v[i]);
        }
        else
        {
            pref.push_back(pref.back() + 1);
        }
    }

    suff[n - 2] = 1;
    for (int i = n - 2; i > 0; i--)
    {
        if (abs(v[i - 1] - v[i]) > abs(v[i + 1] - v[i]))
        {
            suff[i - 1] += ((abs(v[i - 1] - v[i])) + suff[i]);
        }
        else
        {
            suff[i - 1] += 1 + suff[i];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, ans{};
        cin >> a >> b;

        if (a < b)
        {
            ans = pref[b - 1] - pref[a - 1];
        }
        else
        {
            ans = suff[b - 1] - suff[a - 1];
        }

        cout << ans << endl;
    }
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}