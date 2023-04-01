#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        set<int> s;
        vector<int> ans;
        int cnt = 0;
        for (auto &it : v)
        {
            cin >> it;
            cnt++;
            if (s.find(it) == s.end())
            {
                ans.push_back(cnt);
                s.insert(it);
            }
        }
        for (int i = ans.size(); i <= n - 1; i++)
        {
            ans.push_back(-1);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}