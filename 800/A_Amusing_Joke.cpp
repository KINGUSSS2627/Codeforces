//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map<int, int> mp;
    for (auto &it : s1)
    {
        mp[it]++;
    }
    for (auto &it : s2)
    {
        mp[it]++;
    }
    for (auto &it : s3)
    {
        mp[it]--;
    }

    for (auto &it : mp)
    {
        if (it.second)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}