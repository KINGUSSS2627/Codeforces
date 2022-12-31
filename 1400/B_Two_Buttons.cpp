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
    int n, m;
    in n >> m;
    // Instead of going from n --> m move to m --> n
    int k = 0;
    while (m > n && m != 1)
    {
        if (m % 2 != 0)
        {
            m += 1;
        }
        else
        {
            m /= 2;
        }
        k++;
    }
    out k + abs(n - m);
    ret0
}