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
    int y, k, n;
    in y >> k >> n;
    int x = k - y % k;
    int maxx = n - y;
    if (x <= maxx)
    {
        out x << " ";
        x += k;
        while (x <= maxx)
        {
            out x << " ";
            x += k;
        }
        out endl;
    }
    else
    {
        out - 1 << endl;
    }
    ret0
}