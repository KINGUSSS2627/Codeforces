//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f = 0, l = n - 1;

    while (f < n && s[f] == 'W')
    {
        f++;
    }

    while (l >= 0 && s[l] == 'W')
    {
        l--;
    }

    cout << l - f + 1 << endl;
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