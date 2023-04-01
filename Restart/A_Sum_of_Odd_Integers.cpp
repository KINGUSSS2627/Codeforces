#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int i, j, k;
    int n, m, t;
    cin >> n >> k;
    if (n % 2 == k % 2)
    {
        if (k * k > n)
            cout << "No\n";
        else
            cout << "YES\n";
    }
    else
        cout << "NO\n";
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