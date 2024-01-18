//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    map<int, int> mp;
    bool f = 0;
    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        if (mp.find(a) != mp.end() && !f)
        {
            cout << (mp[a] - b) * (mp[a] - b) << endl;
            f = 1;
        }
        else
        {
            mp[a] = b;
        }
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