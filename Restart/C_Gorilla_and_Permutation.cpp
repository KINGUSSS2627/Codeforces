//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (k >= m)
    {
        for (int i = n; i >= k; i--)
        {
            cout << i << " ";
        }

        for (int i = k - 1; i > m; i--)
        {
            cout << i << " ";
        }

        // for (int i = m + 1; i < k; i++)
        // {
        //     cout << i << " ";
        // }

        for (int i = 1; i <= m; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = m; i <= n; i++)
        {
            cout << i << " ";
        }

        for (int i = 1; i < k; i++)
        {
            cout << i << " ";
        }

        for (int i = k + 1; i < m; i++)
        {
            cout << i << " ";
        }
        cout << endl;
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