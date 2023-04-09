#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 == 1 && y1 == 1) || (x1 == n && y1 == 1) || (x1 == n && y1 == m) || (x1 == 1 && y1 == m) || (x2 == 1 && y2 == 1) || (x2 == n && y2 == 1) || (x2 == n && y2 == m) || (x2 == 1 && y2 == m))
        cout << 2 << endl;
    else if (x1 == 1 || y1 == 1 || x1 == n || y1 == m || x2 == 1 || y2 == 1 || x2 == n || y2 == m)
        cout << 3 << endl;
    else

        cout << 4 << endl;
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