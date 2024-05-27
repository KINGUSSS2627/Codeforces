#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int cnt = 1;
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] > v[i])
        {
            cnt++;
        }
        else
        {
            if (cnt >= k)
                ans.push_back(cnt);
            cnt = 1;
        }
    }
    if (cnt >= k)
        ans.push_back(cnt);
    int ans1 = 0;
    for (auto &it : ans)
    {
        ans1 += (it - k + 1);
    }
    cout << ans1 << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}