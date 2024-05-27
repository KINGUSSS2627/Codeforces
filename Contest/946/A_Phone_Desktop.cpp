//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;

    if (b)
    {
        ans += ceil(b / 2.0);
    }

    int left = 15 * ans - 4 * b;

    if (left < a)
    {
        ans += ceil(((a - left) * 1.0) / 15);
    }

    cout << ans << endl;
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