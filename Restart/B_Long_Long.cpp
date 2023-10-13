#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> vc;
    int sum = 0;
    for (auto &it : v)
    {
        cin >> it;
        sum += abs(it);
        if (it)
        {
            vc.push_back(it);
        }
    }
    cout << sum << " ";
    int cnt = 0, i = 0;
    while (i < vc.size())
    {
        bool f = 0;
        while (vc[i] < 0)
        {
            i++;
            f = 1;
        }
        if (f)
            cnt++;
        i++;
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