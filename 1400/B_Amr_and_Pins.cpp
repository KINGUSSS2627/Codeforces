#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    double r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    double dis = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    // cout << dis << endl;
    cout << ceil(dis / (2 * r)) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}