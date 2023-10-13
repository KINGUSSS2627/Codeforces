#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0;

    for (auto &it : v)
    {
        cin >> it;
        if (it < 0)
        {
            a = 1;
            b = it;
        }
    }
    if (a)
    {
        cout << b << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        cout << v[v.size() - 1] << endl;
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