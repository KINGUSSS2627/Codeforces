#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
    sort(v.begin(), v.end());
    bool f = 1;

    int mdif = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        int d = abs(v[i] - v[i - 1]);
        if (d > mdif)
        {
            mdif = d;
        }
        if (mdif > 1)
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}