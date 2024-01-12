//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> b(n, 0), c(n, 0);
    vector<pair<int, int>> a(n);
    vector<int> aa(n, 0);

    for (int i{}; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
        aa[i] = a[i].first;
    }

    for (int i{}; i < n; i++)
    {
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    sort(a.begin(), a.end(), greater<pair<int, int>>());

    int j = x - 1;

    for (int i{}; i < x; i++)
    {
        c[a[i].second] = b[j];
        j--;
    }

    j = x;
    for (int i{n - 1}; i >= x; i--)
    {
        c[a[i].second] = b[j];
        j++;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (aa[i] > c[i])
        {
            cnt++;
        }
    }

    if (cnt == x)
    {
        cout << "YES" << endl;
        for (auto &it : c)
        {
            cout << it << " ";
        }
        cout << endl;
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