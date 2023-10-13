#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r; i++)
    {
        for (int j = i; j <= r; j++)
        {
            if (i + j == i ^ j)
            {
                if (i + j >= l && i + j <= r)
                    cnt++;
            }
        }
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