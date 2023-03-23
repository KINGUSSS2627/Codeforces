#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    set<int> s;
    for (auto &it : v)
    {
        cin >> it;
        s.insert(it);
    }
    if (s.size() > k)
    {
        cout << -1 << endl;
        return;
    }
    cout << n * k << endl;
    for (int i = 0; i < n; i++)
    {
        for (auto it : s)
        {
            cout << it << " ";
        }
        for (int i = 0; i < k - s.size(); i++)
        {
            cout << n - k + 1 << " ";
        }
    }
    cout << endl;
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