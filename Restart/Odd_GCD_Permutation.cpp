#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int i = 1;
    vector<int> v(n);
    for (auto &it : v)
    {
        it = i;
        i++;
    }
    if (n & 1)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(v.begin(), v.end(), greater<int>());
        for (auto &it : v)
        {
            cout << it << " ";
        }
        cout << endl;
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