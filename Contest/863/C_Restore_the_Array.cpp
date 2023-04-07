#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (auto &it : v)
    {
        cin >> it;
    }
    int minnIdx = min_element(v.begin(), v.end()) - v.begin();
    vector<int> ans;
    for (int i = 0; i < minnIdx && i < n - 1; i++)
    {
        ans.push_back(v[i]);
    }
    ans.push_back(0);
    for (int i = minnIdx; i < n - 1; i++)
    {
        ans.push_back(v[i]);
    }
    for (int i = 1; i < ans.size(); i++)
    {
        if (max(ans[i - 1], ans[i]) != v[i - 1])
        {
            if (ans[i - 1] > ans[i])
                ans[i - 1] = v[i - 1];
            else
                ans[i] = v[i - 1];
        }
    }
    for (auto &it : ans)
    {
        cout << it << " ";
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