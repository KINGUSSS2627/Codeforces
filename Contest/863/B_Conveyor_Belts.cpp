#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int min_dis(int x, int y, int n)
{
    x--;
    y--;
    int t1 = min(x, n - x - 1);
    int t2 = min(y, n - y - 1);
    if (t1 < t2)
        return t1;
    return t2;
}
void solve()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    cout << abs(min_dis(x1, y1, n) - min_dis(x2, y2, n)) << endl;
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