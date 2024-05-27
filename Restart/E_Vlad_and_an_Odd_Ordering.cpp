//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    // initally saare odd wale hai
    // uske baad 2 ke multiple mai chnage honge bas

    int odd = (n + 1) / 2;
    if (k <= odd)
    {
        cout << 2 * (k - 1) + 1 << endl;
    }
    else
    {
        k -= odd;

        int i = 4;
        int terms = (n + i / 2) / i;
        while (k > terms)
        {
            k -= terms;
            i *= 2;
            terms = (n + i / 2) / i;
        }

        cout << i / 2 + (k - 1) * i << endl;
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