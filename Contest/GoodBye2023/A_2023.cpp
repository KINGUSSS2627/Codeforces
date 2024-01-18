//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    int ans = 1;
    for (int i{}; i < n; i++)
    {
        int l;
        cin >> l;
        ans *= l;
    }

    if (2023 % ans == 0)
    {
        cout << "YES" << endl;
        for (int i{}; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << 2023 / ans << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
