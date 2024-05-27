//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string ans = "";
    if (n < 29)
    {
        n -= 3;
        ans = "aa";
        ans += 'a' + n;
    }
    else if (n < 54)
    {
        n -= 28;
        ans = 'a';
        ans += 'a' + n;
        ans += 'z';
    }
    else
    {
        n -= 53;
        ans += 'a' + n;
        ans += "zz";
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