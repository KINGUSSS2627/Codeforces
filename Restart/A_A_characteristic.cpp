#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        if ((i * (i - 1) + (n - i) * (n - i - 1)) / 2 == k)
        {
            break;
        }
    }
    if (i == n + 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int j = 0; j < i; j++)
        {
            cout << 1 << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << -1 << " ";
        }
        cout << endl;
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