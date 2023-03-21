#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (auto &it : v1)
    {
        cin >> it;
    }
    for (auto &it : v2)
    {
        cin >> it;
    }
    vector<int> diff;
    for (int i = 0; i < n; i++)
    {
        diff.push_back(v1[i] - v2[i]);
    }
    sort(diff.begin(), diff.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (diff[i] > 0)
        {
            int ind = lower_bound(diff.begin(), diff.end(), -diff[i] + 1) - diff.begin();
            ans += i - ind;
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}