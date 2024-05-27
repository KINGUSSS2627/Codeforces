//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (auto &it : v)
    {
        cin >> it.first;
    }
    for (auto &it : v)
    {
        cin >> it.second;
    }

    sort(v.begin(), v.end());

    for (auto &it : v)
    {
        cout << it.first << " ";
    }
    cout << endl;
    for (auto &it : v)
    {
        cout << it.second << " ";
    }
    cout << endl;
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