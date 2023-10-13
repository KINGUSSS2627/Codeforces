#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s, t;
    cin >> s >> t;

    // We know lcm * hcf = n1 * n2
    // but first we need to handle repeating characters

    int hcf = __gcd(s.length(), t.length());
    int nsz1 =, nsz2 = ;
    while (/* condition */)
    {
        /* code */
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