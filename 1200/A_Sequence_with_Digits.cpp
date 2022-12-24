#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int max_min_digit(int x)
{
    int max = INT_MIN, min = INT_MAX, t1;
    while (x != 0)
    {
        if (max == 9 && min == 0)
        {
            break;
        }
        t1 = x % 10;
        x = x / 10;
        if (max < t1)
        {
            max = t1;
        }
        if (min > t1)
        {
            min = t1;
        }
    }
    return max * min;
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
        int a1, k;
        in a1 >> k;
        k--;
        while (k--)
        {
            int y = max_min_digit(a1);
            if (y == 0)
            {
                break;
            }
            a1 += y;
        }
        out a1 << endl;
    }
    ret0
}