//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool Bit(int num, int i)
{
    return (num & (1ll << i));
}

void solve()
{
    int a, b, r;
    cin >> a >> b >> r;

    if (b > a)
    {
        swap(a, b);
    }

    int x = 0;
    bool f = 0;
    for (int i = 63; i >= 0; i--)
    {
        bool bitA = Bit(a, i);
        bool bitB = Bit(b, i);

        if (!f && bitA && (!bitB))
        {
            f = 1;
        }
        else if (f && bitA && (!bitB))
        {
            int temp = x;
            temp |= (1ll << i);

            if (temp <= r)
            {
                x = temp;
            }

            // cout << temp << " " << x << endl;
        }
    }

    cout << abs((a ^ x) - (b ^ x)) << endl;
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