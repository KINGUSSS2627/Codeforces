#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto &it : v1)
    {
        cin >> it;
    }
    vector<int> v2(n);
    for (auto &it : v2)
    {
        cin >> it;
    }
    bool flag = 0, f2 = 0;
    if (v2[n - 1] > v1[n - 1])
    {
        swap(v2[n - 1], v1[n - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        if (v2[i] > v1[i])
        {
            swap(v2[i], v1[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[i] > v1[n - 1])
        {
            flag = 1;
            break;
        }
        if (v2[i] > v2[n - 1])
        {
            f2 = 1;
            break;
        }
    }

    if (flag || f2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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