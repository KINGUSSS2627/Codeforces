#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (abs(a) == abs(b))
    {
        cout << abs(a) + abs(b) << endl;
    }
    else
    {
        cout << 2 * max(abs(a), abs(b)) - 1 << endl;
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