#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isOK(int mid, int k, vector<int> &v)
{
    int n = v.size();
    int lim = v[(n + 1) / 2 - 1] + mid;
    int lft = k - mid;

    int req = 0;
    for (int i = (n + 1) / 2; i < n; i++)
    {
        req += max(lim - v[i], (int)0);
    }

    return lft >= req;
}

void bs(vector<int> &v, int k)
{
    int low = 0, high = k, cnt = 0;
    while (low <= high)
    {
        if (high == low + 1)
        {
            if (isOK(high, k, v))
            {
                cout << high + v[(v.size() + 1) / 2 - 1] << endl;
                return;
            }
        }
        int mid = (low + high) / 2;
        if (isOK(mid, k, v))
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
        cnt++;
        if (cnt == 100)
        {
            break;
        }
    }
    cout << low + v[(v.size() + 1) / 2 - 1] << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    sort(v.begin(), v.end());
    bs(v, k);
}

int32_t main()
{
    solve();
    return 0;
}