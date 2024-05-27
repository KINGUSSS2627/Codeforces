//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int c1 = 0;
    for (auto &it : v)
    {
        cin >> it;
        if (it == 1)
        {
            c1++;
        }
    }

    bool turn = 1;
    int alice = 0;
    int bob = 0;

    if (c1 & 1)
    {
        alice++;
        turn = 0;
    }

    int rem = 0;

    for (int i = 0; i < n; i++)
    {
        rem += max((int)0, v[i] - 2);
    }

    if (rem % 2)
        turn = !turn;

    if (!turn)
    {
        alice += n - c1;
    }
    else
    {
        bob += n - c1;
    }

    if (alice == bob)
    {
        cout << "Draw" << endl;
    }
    else if (alice > bob)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
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