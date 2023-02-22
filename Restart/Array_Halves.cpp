#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in t;
    tc
    {
        int n;
        cin >> n;
        vector<int> v(2 * n), a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            in v[i];
            a[i] = v[i];
        }
        sort(a.begin(), a.end());
        int maxi = a[n - 1];
        int mini = a[n];
        vector<int> c, d;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > maxi)
                c.push_back(i);
            if (v[n + i] < mini)
                d.push_back(i + n);
        }
        int ans = 0;
        for (int i = 0; i < c.size(); i++)
        {
            ans += d[i] - c[i];
        }
        out ans << endl;
    }
    ret0
}