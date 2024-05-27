//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
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

    string s = "";
    char curr = 'a';

    map<int, vector<char>> mp;

    for (int i = 0; i < n; i++)
    {
        if (!v[i])
        {
            s.push_back(curr);
            mp[v[i] + 1].push_back(curr);
            curr++;
        }
        else
        {
            s.push_back(mp[v[i]].back());
            char last = mp[v[i]].back();
            mp[v[i]].pop_back();

            mp[v[i] + 1].push_back(last);
        }
    }
    cout << s << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}