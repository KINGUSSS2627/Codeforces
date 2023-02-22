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
        vector<int> v(n + 2);
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        v[n + 1] = 1440;
        vector<int> v1(n + 1);
        int cnt = 0;
        for (int i = 0; i < n + 1; i++)
        {
            v1[i] = v[i + 1] - v[i];
            if (v1[i] >= 120)
                cnt += (v1[i] / 120);
        }
        if (cnt > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}