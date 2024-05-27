//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.length();
    int cnt = 1, start = 0;
    vector<int> m(26, 0);

    for (int i = 0; i < n; i++)
    {
        m[s[i] - 'a']++;
    }

    int mini = 1e9;

    for (int i = 0; i < 26; i++)
    {
        if (m[i] == 0)
            continue;

        int cnt = 0, ans = m[i];
        for (int j = 0; j < m[i]; j++)
        {
            if (s[j] - 'a' == i)
            {
                cnt++;
            }
        }
        ans = min(ans, m[i] - cnt);

        for (int j = m[i]; j < n; j++)
        {
            if (s[j - m[i]] - 'a' == i)
                cnt--;
            if (s[j] - 'a' == i)
                cnt++;

            ans = min(ans, m[i] - cnt);
        }

        mini = min(mini, ans);
    }
    cout << mini << endl;
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
