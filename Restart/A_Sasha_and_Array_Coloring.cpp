#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = 0;
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while (i < j)
        {
            ans += v[j] - v[i];
            i++;
            j--;
        }
        cout << ans << endl;
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