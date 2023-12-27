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

    int cntSheep{};
    vector<int> shp;
    for (int i{}; i < n; i++)
    {
        if (s[i] == '*')
        {
            cntSheep++;
            shp.push_back(i);
        }
    }

    if (cntSheep == n || cntSheep == 0)
    {
        cout << 0 << endl;
        return;
    }

    int ans{};
    int midSheep = shp[cntSheep / 2];
    // This will not move in ideal case all come near ot mean or center

    int place = 0;
    for (int i = cntSheep / 2 - 1; i >= 0; i--)
    {
        ans += midSheep - shp[i] - 1 - place;
        place++;
    }

    place = 0;
    for (int i = cntSheep / 2 + 1; i < cntSheep; i++)
    {
        ans += shp[i] - midSheep - 1 - place;
        place++;
    }

    cout << ans << endl;
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