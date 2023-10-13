#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    n -= 1;
    while (n--)
    {
        int i;
        cin >> i;
        ans += i;
    }
    cout << -1 * ans << endl;
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