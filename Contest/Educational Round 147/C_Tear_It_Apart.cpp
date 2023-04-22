#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;

int check(int x)
{
    int cnt = 0;
    if (x > 0)
        cnt = log2(x) + 1;
    return cnt;
}

void solve()
{
    string s;
    cin >> s;
    vector<vector<int>> v(26);
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        v[s[i] - 'a'].push_back(i);
    }
    int finalans = INT_MAX;

    for (int i = 0; i < 26; i++)
    {
        if (v[i].size() != 0)
        {
            int maxx = v[i][0];
            for (int j = 1; j < v[i].size(); j++)
            {
                // To calculate element between curr index and prev index
                int val = v[i][j] - v[i][j - 1] - 1;
                maxx = max(maxx, val);
            }
            maxx = max(maxx, n - v[i][v[i].size() - 1] - 1);
            int x = check(maxx);
            finalans = min(finalans, x);
        }
    }
    cout << finalans << endl;
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
