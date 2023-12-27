//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

void findans(vector<int> &a, vector<int> &b, vector<pair<int, int>> &p)
{
    bool f = 1;
    int ans = 0;

    for (auto &it : p)
    {
        if (f)
        {
            ans += a[it.second];
            ans--;
        }
        else
        {
            ans -= b[it.second];
            ans++;
        }
        f = !f;
    }

    cout << ans << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    vector<pair<int, int>> p(n);

    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }

    for (int i = 0; i < n; i++)
    {
        p[i].first = a[i] + b[i];
        p[i].second = i;
    }

    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    findans(a, b, p);
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