#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &it : v)
    {
        cin >> it;
    }

    int cnt = 1, ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    int i = 0;
    while (i < n)
    {
        sum -= v[i];
        if (sum >= 0)
        {
            ans += v[i] * cnt;
            cnt++;
        }
        else
        {
            ans += v[i] * cnt;
        }
        i++;
    }
    cout << ans << endl;
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
