//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    if (n == 1)
    {
        cout << v[1] - 1 << endl;
    }
    else
    {
        int cnt = 0;

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] > v[i - 1])
                cnt += abs(v[i - 1] - v[i]);
        }
        cout << cnt << endl;
    }
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}