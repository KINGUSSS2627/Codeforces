//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int x, y, z, k;
    cin >> x >> y >> z >> k;

    int ans = 0;

    for (int a = 1; a <= x; a++)
    {
        for (int b = 1; b <= y; b++)
        {
            if (k % (a * b) == 0)
            {
                int c = k / (a * b);
                if (c <= z)
                {
                    ans = max(ans, (x - a + 1) * (y - b + 1) * (z - c + 1));
                }
            }
        }
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