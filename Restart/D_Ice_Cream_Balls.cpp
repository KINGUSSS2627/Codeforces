#include <bits/stdc++.h>
#define int long long int
using namespace std;
int bs(int low, int high, int n)
{
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int x = (mid * (mid - 1)) / 2;
        if (x == n)
        {
            return mid;
        }
        else if (x > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }

    return ans + n - ((ans * (ans - 1)) / 2);
}

void solve()
{
    int n;
    cin >> n;

    int cnt = bs(2, 1e10, n);

    cout << cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}