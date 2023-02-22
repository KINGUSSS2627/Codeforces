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
        n *= 4;
        vector<int> v(n);
        for (auto &it : v)
        {
            in it;
        }
        sort(v.begin(), v.end());
        int flag = 0, area = v[0] * v[n - 1];
        for (int i = 0; i < n / 4; i++)
        {
            if (v[2 * i] != v[2 * i + 1] || v[n - 2 * i - 1] != v[n - 2 * i - 2] || v[2 * i] * v[n - 2 * i - 1] != area)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            out "YES" << endl;
        }
        else
        {
            out "NO" << endl;
        }
    }
    ret0
}