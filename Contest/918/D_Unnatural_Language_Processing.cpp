//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> C = {'b', 'c', 'd'};
    set<char> V = {'a', 'e'};

    string ans = "";
    int cnt = 0;
    for (int i{}; i < n - 3;)
    {
        if (C.find(s[i + 2]) != C.end() && C.find(s[i + 3]) != C.end())
        {
            ans += s[i];
            ans += s[i + 1];
            ans += s[i + 2];
            ans += '.';
            i += 3;
            cnt += 3;
        }
        else
        {
            ans += s[i];
            ans += s[i + 1];
            ans += '.';
            i += 2;
            cnt += 2;
        }
    }
    int i{cnt};
    for (i; i < n; i++)
    {
        ans += s[i];
    }
    cout << ans << endl;
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