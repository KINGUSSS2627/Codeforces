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
    int n;
    in n;
    vector<int> v(n);
    int sum = 0;
    for (auto &i : v)
    {
        in i;
        sum += i;
    }
    if (sum % 3 != 0)
    {
        out 0 << endl;
    }
    else
    {
        int c1 = 0, ans = 0;
        int sum2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum2 += v[i];
            if (sum2 == (2 * sum) / 3)
            {
                ans += c1;
            }
            if (sum2 == sum / 3)
            {
                c1++;
            }
        }
        out ans << endl;
    }
    ret0
}