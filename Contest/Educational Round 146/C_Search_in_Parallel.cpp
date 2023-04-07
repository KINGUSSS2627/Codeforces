#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
void solve()
{
    int n, s1, s2;
    cin >> n >> s1 >> s2;
    vector<int> v(n), v1, v2;
    vector<pair<int, int>> res;
    int k = 0;
    for (auto &it : v)
    {
        cin >> it;
        res.push_back({k + 1, it});
        k++;
    }
    sort(res.begin(), res.end(), cmp);
    int i = 0, t = 1;
    while (1)
    {
        if (!(t % s2) && !(t % s1))
        {
            v1.push_back(res[i].first);
            i++;
            if (i == n)
                break;
            v2.push_back(res[i].first);
            i++;
            if (i == n)
                break;
        }
        else if (t % s1 == 0)
        {
            v1.push_back(res[i].first);
            i++;
            if (i == n)
                break;
        }
        else if (t % s2 == 0)
        {
            v2.push_back(res[i].first);
            i++;
            if (i == n)
                break;
        }
        t++;
    }
    cout << v1.size() << " ";
    for (auto &it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << v2.size() << " ";
    for (auto &it : v2)
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