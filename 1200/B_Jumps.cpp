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
        int step = 0;
        while (step * (step + 1) < 2 * n)
        {
            step++;
        }
        // move a step back
        if (step * (step + 1) == 2 * (n + 1))
        {
            step++;
        }
        out step << endl;
    }
    ret0
}