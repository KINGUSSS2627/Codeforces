#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    string s1, s2;
    cin >> n;
    cin >> s1 >> s2;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            // Flip change 1 flip for len > 1 will perform in max 3*n operations
            if (i > 0)
                ans.push_back(i + 1);
            ans.push_back(1);
            if (i > 0)
                ans.push_back(i + 1);
        }
    }
    cout << ans.size() << " ";
    for (auto &it : ans)
    {
        cout << it << " ";
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