//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    int tt = 1;
    while (tt <= n)
    {
        tt *= 2;
        sum -= tt;
    }
    cout << sum << endl;
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