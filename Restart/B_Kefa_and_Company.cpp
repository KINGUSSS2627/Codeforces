#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        p.push_back({t1, t2});
    }
    sort(p.begin(), p.end(), cmp);
    int l = 0, h = 0, tmp = 0, maxx = INT_MIN;
    // for (l; l < n; l++)
    while (l <= h)
    {
        while (h < n && p[h].first - p[l].first < d)
        {
            tmp += p[h].second;
            h++;
        }
        maxx = max(tmp, maxx);
        tmp -= p[l].second;
        l++;
    }
    cout << maxx << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}