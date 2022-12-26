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
    int c7or4 = 0;
    while (t != 0)
    {
        if (t % 10 == 7 || t % 10 == 4)
        {
            c7or4++;
        }
        t = t / 10;
    }
    if (c7or4 == 4 || c7or4 == 7)
    {
        out "YES" << endl;
    }
    else
    {
        out "NO" << endl;
    }
    ret0
}