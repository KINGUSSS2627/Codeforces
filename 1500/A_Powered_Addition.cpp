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
    int i = 0, t = 0;
    int maxx = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (v[i + 1] < v[i])
        {
            maxx = max(maxx, (int)(1 + log2(v[i] - v[i + 1])));
            v[i + 1] = v[i];
        }
    }
    cout << maxx << endl;
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