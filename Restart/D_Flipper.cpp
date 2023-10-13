#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), v1;
    for (auto &it : v)
    {
        cin >> it;
        v1.push_back(it);
    }
    sort(v1.begin(), v1.end());
    bool f = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v1[n - i - 1])
        {
            f = 0;
            break;
        }
    }
    if (is_sorted(v.begin(), v.end()))
    {
        cout << n << " ";
        if (n - 1)
            cout << n - 1 << " ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else if (f)
    {
        for (int i = 1; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << v[0] << endl;
    }
    else
    {
        int maxx_idx = max_element(v.begin(), v.end()) - v.begin() - 1;
        cout << maxx_idx << endl;
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