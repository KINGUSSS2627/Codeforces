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
        int n, k;
        in n >> k;
        vector<int> v(n);
        for (auto &it : v)
        {
            in it;
        }
        int c = 0, j = 1;
        for (auto &i : v)
        {
            if (i == j)
            {
                j++;
                c++;
            }
        }
        int not_in_place = n - c;
        if (not_in_place % k == 0)
        {
            out not_in_place / k << endl;
        }
        else
        {
            out not_in_place / k + 1 << endl;
        }
    }
    ret0
}