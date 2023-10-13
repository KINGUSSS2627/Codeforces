#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> odd;
    vector<int> even;
    for (auto &it : v)
    {
        cin >> it;
        if (it % 2)
            odd.push_back(it);
        else
            even.push_back(it);
    }
    sort(v.begin(), v.end());
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    if (odd.size() == n || even.size() == n)
        cout << "YES" << endl;
    else if (odd.size() != 0)
    {
        if (even[0] > odd[0])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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