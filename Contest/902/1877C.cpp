#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    if (k == 1)
    {
        ans = 1;
    }
    else if (k == 2)
    {
        if (n >= m)
        {
            ans = m;
        }
        else
        {
            ans = n + m / n - 1;
        }
    }
    else if (k == 3)
    {
        if (n >= m)
        {
            ans = m - m;
        }
        else
        {
            ans = m - (n + m / n - 1);
        }
    }
    else
    {
        ans = 0;
    }

    cout << ans << endl;
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