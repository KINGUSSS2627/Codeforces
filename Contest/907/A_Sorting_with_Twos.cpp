#include <bits/stdc++.h>
#define int long long
#define yy "YES"
#define nn "NO"
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

    // int m = log2(n);
    int idx = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (i + 1 == idx)
        {
            // continue;
        }
        else if (v[i] > v[i + 1])
        {
            cout << nn << endl;
            return;
        }
        if (idx == i + 1)
        {
            idx *= 2;
        }
    }
    cout << yy << endl;
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