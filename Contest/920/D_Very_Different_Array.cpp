//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto &it : a)
    {
        cin >> it;
    }

    for (auto &it : b)
    {
        cin >> it;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;

    int i1{}, i2{}, j1{n - 1}, j2{m - 1};
    while (i1 <= j1)
    {
        if (abs(a[i1] - b[j2]) >= abs(a[j1] - b[i2]))
        {
            ans += abs(a[i1] - b[j2]);
            i1++;
            j2--;
        }
        else
        {
            ans += abs(a[j1] - b[i2]);
            j1--;
            i2++;
        }
    }

    cout << ans << endl;
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