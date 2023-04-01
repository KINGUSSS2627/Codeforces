#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
pair<int, int> min_max_digit(int n)
{
    int minn = 9, maxx = 0;
    while (n)
    {
        int dig = n % 10;
        n /= 10;
        if (dig < minn)
        {
            minn = dig;
        }
        if (dig > maxx)
            maxx = dig;
    }
    return {minn, maxx};
}
void solve()
{
    int l, r;
    cin >> l >> r;
    int ans = 9;
    while (l <= r)
    {
        int mid = (r - l) / 2 + l;
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