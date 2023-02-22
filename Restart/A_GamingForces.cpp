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
        int c1 = 0, c2 = 0;
        for (auto &it : v)
        {
            in it;
            if (it == 1)
                c1++;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        ans = (c1 + 1) / 2 + n - c1;
        out ans << endl;
    }
    ret0
}