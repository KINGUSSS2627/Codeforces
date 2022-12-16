#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in t;
    tc
    {
        int n, k;
        in n >> k;
        int t1, t2;
        t1 = n - 1 * (k - 1);
        t2 = n - 2 * (k - 1);
        if (t1 > 0 && t1 % 2 == 1)
        {
            out "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                out 1 << " ";
            }
            out t1 << endl;
        }
        else if (t2 > 0 && t2 % 2 == 0)
        {
            out "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                out 2 << " ";
            }
            out t2 << endl;
        }
        else
        {
            out "NO" << endl;
        }
    }
    ret0
}