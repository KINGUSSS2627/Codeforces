#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int xor_a = 0;
    for (auto &it : a)
    {
        cin >> it;
        xor_a ^= it;
    }
    int or_b = 0;
    for (auto &it : b)
    {
        cin >> it;
        or_b |= it;
    }

    int minn = 0, mini = 0;
    for (auto &it : a)
    {
        minn ^= (it | or_b);
    }
    cout << min(minn, xor_a) << " ";
    if (n % 2)
    {
        cout << (xor_a | or_b) << endl;
    }
    else
    {
        cout << xor_a << endl;
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