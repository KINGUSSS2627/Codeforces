#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            vector<int> temp(t);
            for (int j = 0; j < t; j++)
            {
                cin >> temp[j];
                mp[temp[j]]++;
            }
            v.push_back(temp);
        }
        vector<int> ans;
        bool f1 = 0, f2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                mp[v[i][j]]--;
                if (!mp[v[i][j]] && !f1)
                {
                    ans.push_back(v[i][j]);
                    f1 = 1;
                }
            }
            f2 = f2 ^ (!f1);
            if (f2)
                break;
            f1 = 0;
        }
        if (f2)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}