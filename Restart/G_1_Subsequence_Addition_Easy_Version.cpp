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
        sort(v.begin(), v.end());
        int sum = 1;
        bool flag = 0;
        if (v[0] != 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i] > sum)
            {
                flag = 1;
                break;
            }
            sum += v[i];
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}