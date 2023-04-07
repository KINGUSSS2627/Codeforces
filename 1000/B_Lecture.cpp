#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
string cmpp(string s1, string s2)
{
    if (s1.size() > s2.size())
        return s2;
    return s1;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> p;
    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        // p.push_back({s1, s2});
        mp[s1] = cmpp(s1, s2);
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << mp[s] << " ";
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}