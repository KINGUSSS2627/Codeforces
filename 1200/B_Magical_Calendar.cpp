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
        if (k < n)
        {
            out k *(k + 1) / 2 << endl;
        }
        else
        {
            int ans = 0;
            ans = n * (n - 1) / 2;
            ans++;
            out ans << endl;
        }
    }
    ret0
}