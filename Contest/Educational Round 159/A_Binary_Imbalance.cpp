#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            c1++;
        }
        else
        {
            c0++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0' || s[i] == '0' && s[i + 1] == '1')
        {
            f = 1;
            break;
        }
    }

    if (f || c0 > c1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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