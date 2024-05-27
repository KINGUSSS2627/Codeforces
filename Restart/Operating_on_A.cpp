//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (auto &it : a)
    {
        cin >> it;
    }

    for (auto &it : b)
    {
        cin >> it;
    }

    bool f = 1;
    for (int i = 0; i < n - 3; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        else
        {
            int p = a[i], q = a[i + 1], r = a[i + 2], s = a[i + 3];
            a[i] = p + q + r;
            a[i + 1] = -r;
            a[i + 2] = -q;
            a[i + 3] = s + r + q;

            int c = 1;
            if (a[i] == b[i])
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[j] != b[j])
                    {
                        c = 0;
                        break;
                    }
                }
            }
            else
            {
                c = 0;
            }

            if (c)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

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