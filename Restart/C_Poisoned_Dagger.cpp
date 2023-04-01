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
        int n, h;
        cin >> n >> h;
        vector<int> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        int low = 0, high = h;
        while (low <= high)
        {
            int mid = ((low + high) >> 1);
            int atk = 0;
            for (int i = 0; i < n - 1; i++)
            {
                int d = v[i + 1] - v[i];
                // Effect last till diff or mid
                atk += min(d, mid);
            }
            // Effect of last dagger
            atk += mid;
            if (atk >= h)
                high = mid - 1;
            if (atk < h)
                low = mid + 1;
        }
        cout << low << endl;
    }
    return 0;
}