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
        int ans = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                pq.push(v[i]);
            }
            else
            {
                if (pq.empty() == 0)
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}