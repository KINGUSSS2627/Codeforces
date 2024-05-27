//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    int kk = k;
    string s;
    cin >> s;

    for (int i = 0; i < n && k; i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
            k--;
        }
    }

    string ans = "";

    cout << min(s, s.substr(kk)) << endl;
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