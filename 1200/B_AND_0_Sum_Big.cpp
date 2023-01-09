#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
const int m = 1e9 + 7;
int mod(int x)
{
    return (x % m + m) % m;
}
int multiply(int a, int b)
{
    return (mod(mod(a) * mod(b)));
}
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
        int ans = 1;
        for (int i = 0; i < k; i++)
        {
            ans = multiply(ans, n);
        }
        out ans << endl;
    }
    ret0
}