#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }

    sort(v.begin(), v.end(), greater<int>());
    int remStep = accumulate(v.begin(), v.end(), (int)0);

    int steps = 0, tmp = 0, ans = remStep;

    for (int i = 0; i < n; i++)
    {
        remStep -= v[i];
        steps += v[i];

        if (steps > remStep)
        {
            tmp = (steps - remStep + 1) / 2;
        }

        ans = min(ans, remStep + tmp + i + 1);
        tmp = 0;
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