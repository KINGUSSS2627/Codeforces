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

    int cnt = 0;

    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
        {
            cnt++;
        }
        if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
        {
            cnt++;
        }
    }

    for (int i = 0; i < n - 4; i++)
    {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e')
        {
            cnt--;
        }
    }

    cout << cnt << endl;
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