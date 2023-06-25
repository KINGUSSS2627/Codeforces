#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), v1(n - 1), v2(n - 2);
    map<int, int> mp, mp1;
    for (auto &it : v)
    {
        cin >> it;
    }
    for (auto &it : v1)
    {
        cin >> it;
        mp1[it]++;
    }
    for (auto &it : v2)
    {
        cin >> it;
        mp[it]++;
    }
    vector<int> ans;
    for (auto &it : v)
    {
        if (mp1[it] > 0)
        {
            mp1[it]--;
        }
        else
        {
            ans.push_back(it);
            break;
        }
    }
    for (auto &it : v1)
    {
        if (mp[it] > 0)
        {
            mp[it]--;
        }
        else
        {
            ans.push_back(it);
            break;
        }
    }
    for (auto &it : ans)
    {
        cout << it << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}