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
        vector<int> v(n);
        int sum = 0;
        for (auto &it : v)
        {
            in it;
            sum += it;
        }
        int ans = 0;
        int sum2 = 0;
        for (int i = 0; i <= n - 2; i++)
        {
            sum -= v[i];
            sum2 += v[i];
            ans = max(__gcd(sum, sum2), ans);
        }
        out ans << endl;
    }
    ret0
}