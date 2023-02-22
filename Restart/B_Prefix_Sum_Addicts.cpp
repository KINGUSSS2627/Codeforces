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
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            in v[i];
        }
        if (k == 1)
        {
            out "YES" << endl;
        }
        else
        {
            vector<int> ans(n);
            int j = n - 1;
            for (int i = k - 1; i > 0; i--)
            {
                ans[j] = v[i] - v[i - 1];
                j--;
            }
            while (j >= 0)
            {
                ans[j] = ans[j + 1];
                v[0] -= ans[j];
                j--;
            }
            ans[0] += v[0];
            if (is_sorted(ans.begin(), ans.end()))
            {
                out "YES" << endl;
            }
            else
            {
                out "NO" << endl;
            }
        }
    }
    ret0
}