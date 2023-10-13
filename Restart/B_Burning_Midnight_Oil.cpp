#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int low = 0, high = n;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int sum = 0, m = 1;
        while (1)
        {
            sum += mid / m;
            if (mid / m == 0)
            {
                break;
            }
            m = m * k;
        }
        if (sum >= n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << high << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}