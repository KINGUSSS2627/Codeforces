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

    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int l = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        else
        {
            o++;
        }

        if (l != mp['L'] - l && o != mp['O'] - o && i != n - 1)
        {
            cout << o + l << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int32_t main()
{
    solve();
    return 0;
}