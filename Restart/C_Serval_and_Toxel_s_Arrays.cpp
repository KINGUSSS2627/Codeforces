#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        vector<pair<int, int>> p(m);
        for (int i = 0; i < m; i++)
        {
            cin >> p[i].first >> p[i].second;
        }
        set<int> s;
    }
    return 0;
}