#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n), c(m);
    for (auto &it : v)
    {
        cin >> it;
        // Converting 1 based indexing to zero based indexing
        it--;
    }
    for (auto &it : c)
    {
        cin >> it;
    }
    int ans = 0;
    // Sorting v will not affect as we have to gift all friends
    sort(v.begin(), v.end());
    int f = 0;
    // Not considering visited since we are moving backward and we alredy sort ki the repurchasing will not happen f++ is there whenever we purchase a gift
    for (int i = n - 1; i >= 0; i--)
    {
        if (f < v[i] && f < m)
        {
            ans += c[f];
            f++;
        }
        else
        {
            ans += c[v[i]];
        }
    }
    cout << ans << endl;
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