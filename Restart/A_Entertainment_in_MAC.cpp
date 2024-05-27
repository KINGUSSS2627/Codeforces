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
    int m = s.length();

    int i = 0, j = m - 1;
    while (i < j && s[i] == s[j])
    {
        i++;
        j--;
    }
    if (i < j && s[i] > s[j])
    {
        string t = s;
        reverse(t.begin(), t.end());
        cout << t + s << endl;
        return;
    }

    cout << s << endl;
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