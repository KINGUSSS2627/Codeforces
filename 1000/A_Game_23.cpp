#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int res = -1;
    if (m % n == 0)
    {
        res = 0;
        int d = m / n;
        while (d % 2 == 0)
            d /= 2, res++;
        while (d % 3 == 0)
            d /= 3, res++;
        if (d != 1)
            res = -1;
    }
    cout << res << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}