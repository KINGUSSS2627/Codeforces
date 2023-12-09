//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;

    int xk, yk, xq, yq;
    cin >> xk >> yk;
    cin >> xq >> yq;

    set<pair<int, int>> st1, st2;
    vector<int> drw = {a, b, -a, -b, a, b, -a, -b};
    vector<int> dcl = {b, a, -b, -a, -b, -a, b, a};

    for (int i = 0; i < 8; i++)
    {
        st1.insert({xk + drw[i], yk + dcl[i]});
    }

    for (int i = 0; i < 8; i++)
    {
        st2.insert({xq + drw[i], yq + dcl[i]});
    }

    int cnt = 0;
    for (auto &it : st1)
    {
        if (st2.find(it) != st2.end())
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