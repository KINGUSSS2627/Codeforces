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

    int cntl = 0, cntr = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[0])
        {
            break;
        }
        else
        {
            cntl++;
        }
    }

    int last = v[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] != last)
        {
            break;
        }
        else
        {
            cntr++;
        }
    }

    if (v[0] != last)
    {
        cout << n - max(cntr, cntl) << endl;
    }
    else
    {
        if (cntl != n)
        {
            cout << n - cntr - cntl << endl;
        }
        else
            cout << 0 << endl;
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