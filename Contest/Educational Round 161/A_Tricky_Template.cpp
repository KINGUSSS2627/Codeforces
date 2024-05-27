//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    bool f = 0;

    for (int i{}; i < n; i++)
    {
        if (a[i] != c[i] && b[i] != c[i])
        {
            f = 1;
            break;
        }
    }

    f ? cout << "YES" << endl : cout << "NO" << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}