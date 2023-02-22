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
        int n, x;
        in n >> x;
        int sum1 = 0, sum2 = 0, sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            in v[i];
            sum += v[i];
        }
        if (sum % x != 0)
        {
            out n << endl;
        }
        else
        {
            int c1 = n, c2 = n;
            sum1 = sum2 = sum;
            for (int i = n - 1; i >= 0; i--)
            {
                if ((sum1 - v[i]) % x != 0)
                {
                    c1--;
                    sum1 -= v[i];
                    break;
                }
                else
                {
                    c1--;
                    sum1 -= v[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                if ((sum2 - v[i]) % x != 0)
                {
                    c2--;
                    sum2 -= v[i];
                    break;
                }
                else
                {
                    c2--;
                    sum2 -= v[i];
                }
            }
            int temp = max(c1, c2);
            sum = max(sum1, sum2);
            if (sum % x != 0)
            {
                cout << temp << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    ret0
}