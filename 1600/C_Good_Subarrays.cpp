#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = (s[i] - '0');
    }
    for (auto &it : v)
    {
        // Insted of searching for length we will serch for 0 and divide length equally :. each get -1
        it = it - 1;
    }

    map<int, int> mp;
    mp[0] = 1;
    int sum_subarray = 0, cnt = 0;
    for (auto &it : v)
    {
        sum_subarray += it;
        cnt += mp[sum_subarray];
        mp[sum_subarray]++;
    }
    cout << cnt << endl;
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