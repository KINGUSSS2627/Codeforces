#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n, 0);
        for (auto &it : v)
        {
            cin >> it;
        }
        int res = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i - 1] + v[i + 1])
                res++;
        }
        if (k == 1)
        {
            cout << ((n - 1) >> 1) << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}