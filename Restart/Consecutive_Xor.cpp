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
        int temp = n;
        vector<int> v(n);
        for (auto &i : v)
        {
            in i;
        }
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i] ^ v[i - 1];
            v[i - 1] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
                temp--;
        }
        if (temp < n - 1)
            out "NO" << endl;
        else if (temp == n - 1)
        {
            if ((n - 1) % 2 == 0)
            {
                out "YES" << endl;
            }
            else
            {
                out "NO" << endl;
            }
        }
        else
        {
            out "YES" << endl;
        }
    }
    ret0
}