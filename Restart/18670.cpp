#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        v.push_back({l, i});
    }
    sort(v.begin(), v.end());
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        ans[v[i].second] = n - i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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