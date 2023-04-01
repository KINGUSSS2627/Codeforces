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
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        vector<int> prefix_sum(n + 2, 0);
        int i = 0;
        for (auto &it : v)
        {
            cin >> it;
            prefix_sum[i + 1] = prefix_sum[i] + it;
            i++;
        }
        for (int i = 0; i < m; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int temp = r - l + 1;
            int out = prefix_sum[l - 1] + prefix_sum[n] - prefix_sum[r];
            // cout << out << endl;
            if (temp % 2 != 0 && k % 2 != 0)
            {
                if (out & 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if (out % 2 == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}