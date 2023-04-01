#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end());
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(v[i]);
    }
    if (v[n - 1] == v[0])
    {
        cout << "NO" << endl;
        return;
    }
    int sum = 0;
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        if (sum > 0)
        {
            cout << dq.front() << " ";
            sum += dq.front();
            dq.pop_front();
        }
        else
        {
            cout << dq.back() << " ";
            sum += dq.back();
            dq.pop_back();
        }
    }
    cout << endl;
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