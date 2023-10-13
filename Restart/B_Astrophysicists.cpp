#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k, g;
    cin >> n >> k >> g;

    int rf = ceil((1.0 * (g)) / 2.0);
    // cout << rf << endl;

    if (k * g <= n * (rf - 1))
    {
        cout << k * g << endl;
    }
    else
    {
        int temp = ((((k * g - (rf - 1) * n + g - 1) / g) * g));
        cout << k * g - temp << endl;
    }
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