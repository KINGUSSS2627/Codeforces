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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        vector<int> prefix;
        prefix.push_back(0);
        for (int i = 0; i < n; i++)
        {
            prefix.push_back(v[i] + prefix[i]);
        }
        int low = 0, high = n - 1;
        while (low < high)
        {
            int mid = low + ((high - low) >> 1);
            cout << "? ";
            cout << (mid - low + 1) << " ";
            for (int i = low; i <= mid; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
            int val;
            cin >> val;
            int sum = prefix[mid + 1] - prefix[low];
            if (val > sum)
                high = mid;
            else
                low = mid + 1;
        }
        cout << "! " << low + 1 << endl;
    }
    return 0;
}