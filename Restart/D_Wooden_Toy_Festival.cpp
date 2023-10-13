#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a.begin(), a.end());
    int low = 0, high = 1e9 + 1, mid;
    while (low <= high)
    {
        int count = 0, j = 0;
        mid = ((high - low) >> 2) + low;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - a[j] > 2 * mid)
            {
                j = i;
                count++;
            }
        }

        if (count > 2)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << low << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}