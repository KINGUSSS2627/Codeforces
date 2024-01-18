//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;
    v.push_back(1);
    int inc = 2;
    for (int i = 1; i < 10; i++)
    {
        v.push_back(v.back() + inc);
        inc++;
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    int ans = 1;
    while (n > 0)
    {
        ans *= v[n % 10];
        n /= 10;
    }

    cout << ans << endl;
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