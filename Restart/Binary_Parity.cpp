//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
int bit(int n, int i)
{
    return n & (1ll << i);
}
void solve()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i <= 32; i++)
    {
        if (bit(n, i))
        {
            cnt++;
        }
    }

    if (cnt & 1)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
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