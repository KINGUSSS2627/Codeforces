#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n = 2;
    vector<string> s(n), t(n), ans;
    s = {"aabaab", "aaaaabb"}, t = {"bbabbc", "abb"};
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        vector<int> hash1(26, 0), hash2(26, 0);
        for (int j = 0; j < s[i].size(); j++)
        {
            hash1[s[i][j] - 'a']++;
        }
        for (int j = 0; j < t[i].size(); j++)
        {
            hash2[t[i][j] - 'a']++;
        }
        for (int j = 0; j < 26; j++)
        {
            if (abs(hash1[j] - hash2[j]) > 3)
            {
                flag = 1;
                break;
            }
        }
        hash1.clear();
        hash2.clear();
        if (flag)
        {
            ans.push_back("NO");
        }
        else
        {
            ans.push_back("YES");
        }
    }
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
    solve();
    return 0;
}