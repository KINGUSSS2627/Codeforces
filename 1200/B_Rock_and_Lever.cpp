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
        int a[n], ans = 0;
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        // for i < j ai & aj > ai ^ aj   ----->  condition will be true if both selected number has 1 and 1 at same position if both are alternate then condition fails
        // 10^9 % pow(2,30)==0 :. to traverse all bits of the numbers
        for (int j = 29; j >= 0; j--)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                // if i do left shift by k units in binary then the equivalent number is equal to pow(2,k) :. below statement is finding the maximum bit which is 1
                if (a[i] >= (1 << j) && a[i] < (1 << (j + 1)))
                {
                    count++;
                }
            }
            // Its basically n->c->2 i.e. n!/(2!*(n-2)!)
            ans += (count * (count - 1)) / 2;
        }
        out ans << endl;
    }
    ret0
}