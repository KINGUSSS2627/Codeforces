//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int x, n;
    cin >> n >> x;

    int ans = 1;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0 && n / i >= x)
        {
            ans = max(ans, i);
        }
    }

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0 && i >= x)
        {
            ans = max(ans, n / i);
        }
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