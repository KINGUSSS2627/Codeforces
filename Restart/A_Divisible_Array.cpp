#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << 2 * i << " ";
        }
    }
    cout << endl;
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