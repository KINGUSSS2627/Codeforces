//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    char ch = s1[0];
    s1[0] = s2[0];
    s2[0] = ch;

    cout << s1 << " " << s2 << endl;
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