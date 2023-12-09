//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    int sum = v[0], msum = v[0], prev = v[0];
    for (int i = 1; i < n; i++)
    {
        if (sum < 0)
        {
            sum = v[i];
        }
        else if ((prev & 1) ^ (v[i] & 1))
        {
            sum += v[i];
        }
        else
        {
            sum = v[i];
        }

        msum = max(sum, msum);
        prev = v[i];
    }
    cout << msum << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}