#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}