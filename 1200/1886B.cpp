#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    pair<int, int> p, a, b;
    cin >> p.first >> p.second;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;

    double pb = sqrtl(pow(p.first - b.first, 2) + pow(p.second - b.second, 2));
    double ab = sqrtl(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
    double pa = sqrtl(pow(p.first - a.first, 2) + pow(p.second - a.second, 2));
    double oa = sqrtl(pow(0 - a.first, 2) + pow(0 - a.second, 2));
    double ob = sqrtl(pow(0 - b.first, 2) + pow(0 - b.second, 2));

    double low = 0, high = 1e4, ans = 1e4, cnt = 0;
    while (high >= low)
    {
        double mid = (low + high) / (double)2;

        if (((ob <= mid && pb <= mid) || (oa <= mid && pa <= mid) || (min(oa, ob) <= mid && ab <= 2 * mid && min(pa, pb) <= mid)))
        {
            high = mid;
            ans = mid;
        }
        else
        {
            low = mid;
        }
        cnt++;

        if (cnt == 100)
        {
            break;
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
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