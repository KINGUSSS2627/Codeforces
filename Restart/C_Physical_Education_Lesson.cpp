//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;

    int cnt = 0;
    for (int k = 2; k <= 1e6; k += 2)
    {
        if (n % (2 * k - 2) == x % (2 * k - 2))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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