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
    // If we choose maxima and minima after selecting two no i.e start and end the we get the max benifit with least length
    vector<int> ans;
    ans.push_back(v[0]);
    for (int i = 1; i < n - 1; i++)
    {
        if ((v[i] > v[i - 1] && v[i] > v[i + 1]) || (v[i] < v[i - 1] && v[i] < v[i + 1]))
        {
            ans.push_back(v[i]);
        }
    }
    ans.push_back(v[n - 1]);
    cout << ans.size() << endl;
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
