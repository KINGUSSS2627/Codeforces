//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
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

    int cnt = 0;
    for (auto &it : b)
    {
        cin >> it;
        if (it == 1)
        {
            cnt++;
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    int i = 0, j = n - 1, k{}, sum{};
    while (cnt--)
    {
        sum += 2 * a[j];
        j--;
    }
    while (i <= j)
    {
        sum += a[j];
        j--;
        sum += a[i];
        i += b[k] - 1;
        k++;
    }
    cout << sum << endl;
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