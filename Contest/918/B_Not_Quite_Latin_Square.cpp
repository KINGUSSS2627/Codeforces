//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    vector<vector<char>> v(3, vector<char>(3, '0'));

    int ii{}, jj{};
    for (int i{}; i < 3; i++)
    {
        for (int j{}; j < 3; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == '?')
            {
                ii = i;
                jj = j;
            }
        }
    }

    map<char, int> mp;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;

    for (int i{}; i < 3; i++)
    {
        mp[v[ii][i]]++;
    }

    for (auto &it : mp)
    {
        if (!it.second)
        {
            cout << it.first << endl;
            return;
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