//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
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

    sort(v.begin(), v.end(), greater<int>());

    int cnt = 0, sum = 0, maxx = 0, minn = 1e9;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        cnt++;
        minn = min(minn, v[i]);

        maxx = max(maxx, min(cnt * minn, sum));
    }
    cout << maxx << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
