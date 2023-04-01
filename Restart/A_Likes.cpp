#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return b.second < a.second;
}
void solve()
{
    int p;
    cin >> p;
    vector<int> v(p);
    for (auto &it : v)
    {
        cin >> it;
    }
    vector<int> v_gint = v;
    sort(v_gint.begin(), v_gint.end(), greater<int>());
    map<int, int> abs_mp;
    int cnt = 0;
    for (auto &it : v_gint)
    {
        if (it < 0 && abs_mp[-it] == 1)
        {
            cnt--;
        }
        else
        {
            cnt++;
        }
        abs_mp[abs(it)]++;
        cout << cnt << " ";
    }
    cout << "\n";
    vector<pair<int, int>> ans;
    for (auto &it : abs_mp)
    {
        ans.push_back({it.first, it.second});
    }
    sort(ans.begin(), ans.end(), cmp);
    int temp = 0;
    for (auto &it : ans)
    {
        if (it.second != 2)
        {
            temp++;
            cout << temp << " ";
        }
        else
        {
            cout << 1 << " " << 0 << " ";
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