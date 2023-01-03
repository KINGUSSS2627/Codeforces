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
        for (auto &it : v)
        {
            in it;
        }
        sort(v.begin(), v.end());
        vector<int> v1(n);
        int l = 0, r = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2)
            {
                v1[i] = v[l];
                l++;
            }
            else
            {
                v1[i] = v[r];
                r--;
            }
        }
        for (auto &it : v1)
        {
            out it << " ";
        }
        out endl;
    }
    ret0
}