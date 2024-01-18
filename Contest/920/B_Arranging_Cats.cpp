//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1 >> s2;

    int cnt10{}, cnt01{};

    for (int i{}; i < n; i++)
    {
        if (s1[i] == '1' && s2[i] == '0')
        {
            cnt10++;
        }
        else if (s1[i] == '0' && s2[i] == '1')
        {
            cnt01++;
        }
    }

    if (cnt01 <= cnt10)
    {
        cout << cnt10 << endl;
    }
    else
    {
        cout << cnt01 << endl;
    }
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