#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int temp = 0, ans = n;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
            temp++;
        else if (s[i] == '-')
            temp--;
        if (temp < 0)
        {
            temp = 0;
            ans += (i + 1);
        }
    }
    cout << ans << endl;
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