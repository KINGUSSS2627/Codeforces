#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string l, r;
    cin >> l >> r;
    int lendiff = r.length() - l.length();
    while (lendiff--)
    {
        l = '0' + l;
    }

    int ans = 0, i = 0;
    while (i < r.length() && l[i] == r[i])
    {
        i++;
    }

    ans += abs(r[i] - l[i]);
    for (int j = i + 1; j < r.length(); j++)
    {
        ans += 9;
    }
    cout << ans << endl;
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