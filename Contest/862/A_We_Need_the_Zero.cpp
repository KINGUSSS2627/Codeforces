#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int k = 0;
    for (auto &it : v)
    {
        cin >> it;
        k = k ^ it;
    }
    if (n % 2 == 0 && k == 0)
        cout << k << endl;
    else if (n % 2 == 0 && k != 0)
        cout << -1 << endl;
    else
        cout << k << endl;
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