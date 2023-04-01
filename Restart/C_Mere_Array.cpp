#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1(n);
    int i = 0;
    for (auto &it : v)
    {
        cin >> it;
        v1[i] = it;
        i++;
    }
    bool flag = 0;
    int minn = *min_element(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v1[i] && v1[i] % minn != 0)
        {
            flag = 1;
        }
    }

    if (!flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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