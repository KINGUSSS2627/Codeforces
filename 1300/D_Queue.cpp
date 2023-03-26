#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
    sort(v.begin(), v.end());
    int sum = 0, cnt = n;
    for (int i = 0; i < n; i++)
    {
        if (sum > v[i])
        {
            cnt--;
            sum -= v[i];
        }
        sum += v[i];
    }
    cout << cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}