//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }

    int se{}, so{};
    for (int i{}; i < n; i++)
    {
        if (i & 1)
        {
            se += v[i];
        }
        else
        {
            so += v[i];
        }
    }

    if (so >= se)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << v[i] << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                cout << v[i] << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
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