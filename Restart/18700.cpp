#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (k > n || x < k - 1)
    {
        cout << -1 << endl;
    }
    else if (k == x)
    {
        cout << k * (k - 1) / 2 + (n - k) * (x - 1) << endl;
    }
    else
    {
        cout << k * (k - 1) / 2 + (n - k) * x << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}