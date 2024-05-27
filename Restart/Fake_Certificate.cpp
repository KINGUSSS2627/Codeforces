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

    int cnt = 0, mcnt = 0, cnt1 = 0;

    for (auto &it : s)
    {
        if (it == '1')
        {
            cnt1++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        while (s[i] == '0')
        {
            cnt++;
            i++;
        }

        mcnt = max(mcnt, cnt);
    }

    cout << mcnt + cnt1 << endl;
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