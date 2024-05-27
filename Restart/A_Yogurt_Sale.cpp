//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    float cost2 = b / 2.0;
    float cost1 = a * 1.0;

    int ans = 0;
    if (cost2 < cost1)
    {
        ans += b * (n / 2);
        if (n & 1)
        {
            ans += a;
        }
    }
    else
    {
        ans += n * a;
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