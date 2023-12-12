//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;

    int nn = n - 1;
    int cnt = 1;
    while (nn)
    {
        cout << cnt << " " << cnt + 1 << endl;
        cnt += 1;
        nn--;
    }
    int prev = n - 1;
    set<int> dd = {n - 1};
    while (q--)
    {
        int d;
        cin >> d;
        if (dd.find(d) != dd.end())
        {
            cout << -1 << " " << -1 << " " << -1 << endl;
        }
        else
        {
            if (dd.find(prev) != dd.end())
            {
                dd.erase(prev);
                if (n - prev)
                {
                    dd.erase(n - prev);
                }
            }

            cout << n << " " << prev << " " << d << endl;
            dd.insert(d);
            if (n - d)
            {
                dd.insert(n - d);
            }
            prev = d;
        }
    }
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}