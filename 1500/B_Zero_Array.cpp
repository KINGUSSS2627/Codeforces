#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (auto &it : v)
    {
        cin >> it;
        sum += it;
    }
    int maxx = *max_element(v.begin(), v.end());
    if (sum % 2 == 0 && sum >= 2 * maxx)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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