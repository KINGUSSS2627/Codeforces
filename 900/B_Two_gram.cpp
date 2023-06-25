/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
==> author:	    Shreshth Gupta
==> date:		2023/06/15/ 20:20:01 Thursday
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int res = 0;
    string ans;
    for (int i = 0; i < n - 1; ++i)
    {
        int cur = 0;
        for (int j = 0; j < n - 1; ++j)
            if (s[j] == s[i] && s[j + 1] == s[i + 1])
                ++cur;
        if (res < cur)
        {
            res = cur;
            ans = string(1, s[i]) + string(1, s[i + 1]);
        }
    }

    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}