#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    int ans = 0;
    if (bx < ax && cx < ax || bx > ax && cx > ax)
    {
        ans += min(abs(ax - bx), abs(ax - cx));
    }
    if (by < ay && cy < ay || by > ay && cy > ay)
    {
        ans += min(abs(ay - by), abs(ay - cy));
    }
    cout << ans + 1 << endl;
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