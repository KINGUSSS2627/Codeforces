#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int a;
    cin >> a;
    int n = sqrtl(a);
    if (n * n == a)
    {
        cout << (int)sqrtl(a - 1) << endl;
    }
    else
    {
        cout << n << endl;
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