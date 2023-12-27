//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    string s1 = "";
    s1 += s[0];
    string s2 = "";
    int i = 1;
    while (s[i] == '0' && i < s.length())
    {
        s1 += s[i];
        i++;
    }
    if (i == s.length())
    {
        cout << -1 << endl;
        return;
    }
    s2 = s.substr(i);
    int a = stoi(s1);
    int b = stoi(s2);
    if (a >= b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a << " " << b << endl;
    }
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