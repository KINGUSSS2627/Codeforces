//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int aa = abs(a - a) + abs(a - b) + abs(a - c);
    int ab = abs(b - a) + abs(b - b) + abs(b - c);
    int ac = abs(c - a) + abs(c - b) + abs(c - c);

    cout << min(aa, min(ab, ac)) << endl;
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