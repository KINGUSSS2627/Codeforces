#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            v.push_back(i);
    }
    v.push_back(n - 1);
    k++;
    if (k >= n && v.size() == 2)
    {
        cout << 1 << endl;
        return;
    }

    int ans = 2;
    if (v[1] < k)
        ans--;
    if (v[v.size() - 2] + k > v[v.size() - 1])
        ans--;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (((v[i + 1] - v[i]) / k) - 1 > 0)
            ans += ((v[i + 1] - v[i]) / k) - 1;
    }
    cout << ans << endl;
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