//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool chk(int k, vector<pair<int, int>> &v)
{
    int jmin = 0, jmax = 0;
    for (int i = 0; i < v.size(); i++)
    {
        jmin = max(jmin - k, v[i].first);
        jmax = min(jmax + k, v[i].second);

        if (jmax < jmin)
        {
            return false;
        }
    }
    return true;
}

void bs(vector<pair<int, int>> &v)
{
    int low = 0, high = 1e12;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (chk(mid, v))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low << endl;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (auto &it : v)
    {
        cin >> it.first >> it.second;
    }

    bs(v);
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