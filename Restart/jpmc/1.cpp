#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)

using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    vector<int> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        v[i] = i;
        pref[i] = i;
    }
    while (k--)
    {
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i] + pref[i - 1];
        }
        int sum = 0;
        for (auto &it : pref)
        {
            cout << it << " ";
            sum += it;
        }
        for (int i = 0; i < n; i++)
        {
            cout << " ";
        }
        cout << sum;
        cout << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
