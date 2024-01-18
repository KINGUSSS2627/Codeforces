//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, f, a, b;
    cin >> n >> f >> a >> b;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    vector<int> diff;
    for (int i{0}; i < n; i++)
    {
        if (i == 0)
        {
            diff.push_back(v[i]);
        }
        else
        {
            diff.push_back(v[i] - v[i - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (diff[i] * a <= b)
        {
            f -= diff[i] * a;
        }
        else
        {
            f -= b;
        }
    }
    if (f <= 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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