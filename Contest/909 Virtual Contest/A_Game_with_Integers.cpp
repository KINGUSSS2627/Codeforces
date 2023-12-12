//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}