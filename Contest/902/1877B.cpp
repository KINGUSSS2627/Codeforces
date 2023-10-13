#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}

void solve()
{
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> vc(n);
    for (auto &it : vc)
    {
        cin >> it.first;
    }
    for (auto &it : vc)
    {
        cin >> it.second;
    }
    sort(vc.begin(), vc.end(), cmp);

    int sum = 0, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (vc[i].second > p || cnt == n - 1)
        {
            break;
        }
        else if (vc[i].first < n - cnt - 1)
        {
            sum += vc[i].second * vc[i].first;
            cnt += vc[i].first;
        }
        else
        {
            sum += vc[i].second * (n - cnt - 1);
            cnt = n - 1;
            break;
        }
    }

    sum += p * (n - cnt);
    cout << sum << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}