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

    int ans = v[0], temp = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] <= ans)
        {
            int k = 0, temp = v[i];
            while (v[i] <= ans)
            {
                k++;
                v[i] = temp * k;
            }
        }
        ans = v[i];
    }
    cout << ans << endl;
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