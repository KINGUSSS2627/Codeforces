#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout << (n * (n - 1) * (n + 1)) / 6 + n << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}