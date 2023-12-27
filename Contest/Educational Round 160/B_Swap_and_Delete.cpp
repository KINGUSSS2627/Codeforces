//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s, tt;
    cin >> s;
    tt = s;

    int c0 = 0, c1 = 0;
    for (auto &it : s)
    {
        if (it == '0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && c0)
        {
            s[i] = '0';
            c0--;
        }
        else if (s[i] != '1' && c1)
        {
            s[i] = '1';
            c1--;
        }
    }

    int j = 0, cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != tt[j])
        {
            j++;
        }
        else
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}