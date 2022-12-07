#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    o;
    tc
    {
        int l, m, n;
        in l >> m >> n;
        while (l > 0)
        {
            if (l >= 20 && m != 0)
            {
                l = l / 2 + 10;
                m--;
            }
            if (l < 20 && n != 0)
            {
                l = l - 10;
                if (l <= 0)
                    break;
                n--;
            }
            if (n == 0 && m != 0)
            {
                l = l / 2 + 10;
                m--;
            }
            if (m == 0 && n != 0)
            {
                l = l - 10;
                if (l <= 0)
                    break;
                n--;
            }
            if (n == 0 && m == 0)
            {
                break;
            }
        }
        if (l <= 0)
        {
            out "YES" << endl;
        }
        else
        {
            out "NO" << endl;
        }
    }
    ret0
}