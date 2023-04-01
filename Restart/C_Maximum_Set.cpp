#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
#define mod = 998244353;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int l, r;
        cin >> l >> r;
        int msize = 0, ans = 0;
        msize = __lg(r / l);
        int fac1 = 1 << msize, fac2 = (1 << (msize - 1)) * 3;

        int zero = 0;
        ans += ((r / fac1) - l + 1);
        ans += msize * max(zero, ((r / fac2) - l + 1));
        cout << msize + 1 << " " << ans << endl;
    }
    return 0;
}