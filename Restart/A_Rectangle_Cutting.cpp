//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        swap(a, b);
    }

    if ((a % 2 == 0 && a / 2 != b) || (b % 2 == 0 && b / 2 != a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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