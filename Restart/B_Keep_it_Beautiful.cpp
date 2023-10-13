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
    int temp = v[0];
    int prev = v[0];
    bool f = 0;
    string res = "1";
    for (int i = 1; i < n; i++)
    {
        if (v[i] < prev && (!f) && v[i] <= temp)
        {
            res += '1';
            prev = v[i];
            f = 1;
        }
        else if (v[i] >= prev && (!f))
        {
            res += '1';
            prev = v[i];
        }
        else if (f && v[i] <= temp && v[i] >= prev)
        {
            res += '1';
            prev = v[i];
        }
        else
        {
            res += '0';
        }
    }
    cout << res << endl;
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