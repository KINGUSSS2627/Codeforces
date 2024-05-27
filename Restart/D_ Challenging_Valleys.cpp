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

    vector<int> a;
    a.push_back(v[0]);

    for (int i = 1; i < n; i++)
    {
        if (a.back() != v[i])
            a.push_back(v[i]);
    }

    int vally = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if ((i == 0 || a[i - 1] > a[i]) && (i == a.size() - 1 || a[i] < a[i + 1]))
            vally++;
    }

    vally == 1 ? cout << "YES" << endl : cout << "NO" << endl;
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