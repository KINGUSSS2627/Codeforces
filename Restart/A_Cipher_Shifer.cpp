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
    string ans = "";
    char prev = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != prev)
        {
            continue;
        }
        else
        {
            ans += prev;
            prev = s[i + 1];
            i++;
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