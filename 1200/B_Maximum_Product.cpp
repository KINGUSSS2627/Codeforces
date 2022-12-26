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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        sort(a, a + n);
        int t1, t2, t3, t4;
        t1 = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
        t2 = a[n - 1] * a[n - 2] * a[n - 3] * a[0] * a[1];
        t3 = a[n - 1] * a[0] * a[1] * a[2] * a[3];
        t4 = max(t1, max(t2, t3));
        out t4 << endl;
    }
    ret0
}