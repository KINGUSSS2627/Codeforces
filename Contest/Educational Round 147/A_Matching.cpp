#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    if (s[0] == '0')
        cout << 0 << endl;
    else
    {
        int ans = 1;
        if (s[0] == '?')
            ans *= 9;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '?')
                ans *= 10;
        }

        cout << ans << endl;
    }
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