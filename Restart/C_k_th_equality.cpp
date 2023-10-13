#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int temp = pow(10, a + b) - pow(10, a) - pow(10, b) + 1;
    if (temp < k || c < max(a, b))
    {
        cout << -1 << endl;
    }
    else
    {
        string s = "";
        vector<pair<int, int>> p = {{1, 9}, {2, 90}, {3, 900}, {4, 9000}, {5, 90000}, {6, 900000}};
        int i = 0, j = 0, p = 0, q = 0, m = 0, n = 0;
        while (k > p[c].second && i < 6)
        {
            i++;
            k -= p[c].second;
        }
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