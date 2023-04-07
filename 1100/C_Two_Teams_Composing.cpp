#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    set<int> s;
    for (auto &it : v)
    {
        cin >> it;
        mp[it]++;
        s.insert(it);
    }
    int maxx = INT_MIN;
    for (auto &it : mp)
    {
        if (it.second > maxx)
            maxx = it.second;
    }
    if (maxx > s.size())
        cout << s.size() << endl;
    else
        cout << min(maxx, (int)s.size() - 1) << endl;
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