#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b)
{
    if (a.first.second != b.first.second)
    {
        return a.first.second > b.first.second;
    }
    return a.first.first < b.first.first;
}

void solve1()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first.first >> vp[i].first.second;
        vp[i].second = i;
    }

    vector<pair<pair<int, int>, int>> v(vp.begin(), vp.end());
    sort(v.begin(), v.end(), cmp);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vp[v[i].second].first.first <= 0)
        {
            continue;
        }

        cnt += max(0, vp[v[i].second].first.first);
        int idx = v[i].second;
        vp[idx].first.first = 0;
        while (vp[idx].first.first <= 0)
        {
            int nind = (idx + 1) % n;

            if (vp[nind].first.first <= 0)
            {
                break;
            }

            vp[nind].first.first -= vp[idx].first.second;
            idx = nind;
        }
    }
    cout << cnt << endl;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first >> vp[i].second;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}