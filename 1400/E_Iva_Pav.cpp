//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    // We need to get & in range [l, r] and get it val >= k if fessible
    // We can capture the bits :. a[i] <= 1e9 :. 32 bits are ok to capture them

    vector<vector<int>> bits(n, vector<int>(32, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            int x = (v[i] & (1 << j));
            bits[i][j] = x ? 1 : 0;
        }
    }

    for (int i = 0; i < 32; i++)
    {
        for (int j = 1; j < n; j++)
        {
            bits[j][i] += bits[j - 1][i];
        }
    }

    // for (auto &i : bits)
    // {
    //     for (auto &j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // For q Queries i have l and k
    int q;
    cin >> q;
    while (q--)
    {
        int l, k;
        cin >> l >> k;
        l--;

        int ll = l;
        int r = n - 1, ans = -1;

        while (l <= r)
        {

            int mid = ((r - l) / 2) + l;

            int x = 0;
            for (int i = 0; i < 32; i++)
            {
                int cnt = bits[mid][i];
                if (ll >= 1)
                    cnt = bits[mid][i] - bits[ll - 1][i];

                if (cnt == mid - ll + 1)
                {
                    x |= (1 << i);
                }

                // cout << x << " " << cnt << endl;
            }

            if (x >= k)
            {
                ans = mid + 1;
                // cout << r + 1 << " ";
                l = mid + 1;
                // cout << ans << endl;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
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