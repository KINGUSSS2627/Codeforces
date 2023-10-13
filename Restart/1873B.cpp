#include <bits/stdc++.h>
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
    v[0]++;
    int ans = 1;
    for (auto &it : v)
    {
        ans *= it;
    }
    cout << ans << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}