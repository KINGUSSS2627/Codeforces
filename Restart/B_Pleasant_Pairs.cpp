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
        int v[n + 1];
        for (int i = 1; i < n + 1; i++)
        {
            in v[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = v[i] - i; j <= n; j += v[i])
            {
                if (j > 0)
                {
                    if (v[i] * v[j] == i + j && i < j)
                        ans++;
                }
            }
        }
        out ans << endl;
    }
    ret0
}