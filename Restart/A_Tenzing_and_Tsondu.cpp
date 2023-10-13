#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n), v1(m);
    int s1 = 0, s2 = 0;
    for (auto &it : v)
    {
        cin >> it;
        s1 += it;
    }
    for (auto &it : v1)
    {
        cin >> it;
        s2 += it;
    }

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());

    if (s1 > s2)
    {
        cout << "Tsondu" << endl;
    }
    else if (s2 > s1)
    {
        cout << "Tenzing" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}