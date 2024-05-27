//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (auto &it : v)
    {
        cin >> it;
    }

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    int req = sum / n;
    int extra = 0;

    bool f = 1;
    for (auto &it : v)
    {
        if (it < req)
        {
            int need = max(it - req, req - it);
            if (need > extra)
            {
                f = 0;
                break;
            }
            else
            {
                extra -= need;
            }
        }
        else
        {
            extra += abs(req - it);
        }
    }

    if (!f)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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