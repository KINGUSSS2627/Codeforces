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
        int n;
        in n;
        if (n % 2 == 0)
        {
            out "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                out "1 -1 ";
            }
            out endl;
        }
        else if (n == 3)
        {
            out "NO" << endl;
        }
        else
        {
            out "YES" << endl;
            int x = n / 2;
            for (int i = 0; i < x; i++)
            {
                out 1 - x << " " << x << " ";
            }
            out 1 - x << endl;
        }
    }
    ret0
}