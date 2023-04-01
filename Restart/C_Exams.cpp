#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &it : v)
    {
        int t1, t2;
        cin >> it.first >> it.second;
    }
    sort(v.begin(), v.end());
    int ok = -1;
    for (int i = 0; i < n; i++)
    {
        if (ok <= v[i].second)
        {
            ok = v[i].second;
        }
        else
        {
            ok = v[i].first;
        }
    }
    cout << ok << endl;
    return 0;
}