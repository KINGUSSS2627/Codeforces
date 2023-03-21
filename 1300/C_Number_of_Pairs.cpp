#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int l1 = l - v[i], r1 = r - v[i];
        int t1, t2;
        t1 = upper_bound(v.begin(), v.end(), r1) - v.begin();
        t2 = lower_bound(v.begin(), v.end(), l1) - v.begin();
        cnt += (t1 - t2);
        if (i < t1 && i >= t2)
            cnt--;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - 1; j > i; j--)
    //     {
    //         if (v[i] + v[j] >= l && v[i] + v[j] <= r)
    //             cnt++;
    //         else if (v[i] + v[j] > r)
    //             continue;
    //         else
    //             break;
    //     }
    // }
    cout << (cnt >> 1) << endl;
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