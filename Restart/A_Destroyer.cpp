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
    int maxx = *max_element(v.begin(), v.end());
    vector<int> cnt(maxx + 1, 0);
    for (auto &it : v)
    {
        cnt[it]++;
    }
    bool f = 0;
    for (int i = 1; i <= maxx; i++)
    {
        if (cnt[i] > cnt[i - 1] || cnt[i] != 0 && cnt[i - 1] == 0)
        {
            f = 1;
            break;
        }
    }
    if (f || (n == 1 && v[0] != 0))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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