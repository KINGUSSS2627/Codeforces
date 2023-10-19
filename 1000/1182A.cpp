#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    if (n & 1)
    {
        cout << 0 << endl;
    }
    else
        cout << (int)pow(2, n / 2) << endl;
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}