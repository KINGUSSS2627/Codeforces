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
        int n, m;
        in n >> m;
        int k = n / m;
        int sum = 0, sum1 = 0;
        for (int i = 1; i <= 10; i++)
        {
            sum += i * m % 10;
        }
        for (int i = 1; i <= k % 10; i++)
        {
            sum1 += i * m % 10;
        }
        out sum1 + (k / 10) * sum << endl;
    }
    ret0
}