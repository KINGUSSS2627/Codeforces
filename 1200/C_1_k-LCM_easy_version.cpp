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
        if (n % 2 != 0)
        {
            out 1 << " " << n / 2 << " " << n / 2 << endl;
            // if n is odd lower bound of n/2 will be taken 2 times rest is 1 to make sum equal
        }
        else if (n % 4 == 0)
        {
            out n / 2 << " " << n / 4 << " " << n / 4 << endl;
            // if n is divisible by 4 then we must take n/4 , n/4 , n/2 else the third no will become zero if we take n/2 , n/2
        }
        else if (n % 2 == 0)
        {
            out 2 << " " << n / 2 - 1 << " " << n / 2 - 1 << endl;
        }
    }
    ret0
}