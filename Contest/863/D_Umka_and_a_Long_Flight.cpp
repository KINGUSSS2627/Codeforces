#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
vector<int> fib(50, 0);
void precompute_fib()
{
    fib[0] = fib[1] = 1;
    for (int i = 2; i < 47; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
bool help(int n, int x, int y)
{
    if (n == 1)
        return 1;
    if (min(y, fib[n + 1] - y + 1) > fib[n + 1] - fib[n])
        return false;
    y = min(y, fib[n + 1] - y + 1);
    return help(n - 1, y, x);
}
bool solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (help(n, x, y))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute_fib();
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}