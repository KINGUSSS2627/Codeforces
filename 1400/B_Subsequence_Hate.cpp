#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    // Good string will be 00000.....11111 or 11111......00000
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for (auto &it : s)
    {
        if (it == '1')
            cnt1++;
        else
            cnt0++;
    }
    int ans = min(cnt0, cnt1);
    int curr0 = 0, curr1 = 0;
    for (auto &it : s)
    {
        if (it == '1')
            curr1++, cnt1--;
        else
            curr0++, cnt0--;
        ans = min(ans, curr1 + cnt0);
        ans = min(ans, curr0 + cnt1);
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