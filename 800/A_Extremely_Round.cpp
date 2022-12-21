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
        int temp = n, digit = 0;
        while (n / 10 != 0)
        {
            digit++;
            n /= 10;
        }
        out digit * 9 + n << endl;
    }
    ret0
}