//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int rec(int i, string &s, vector<int> &dp)
{
    if (i >= s.length())
    {
        return 0;
    }

    if (dp[i] != -1)
    {
        return dp[i];
    }

    int one = 0, two = 0;
    if (s[i + 1] == '@')
    {
        one = 1 + rec(i + 1, s, dp);
    }
    else if (s[i + 1] == '.')
    {
        one = rec(i + 1, s, dp);
    }

    if (i + 2 < s.length() && s[i + 2] == '@')
    {
        two = 1 + rec(i + 2, s, dp);
    }
    else if (i + 2 < s.length() && s[i + 2] == '.')
    {
        two = rec(i + 2, s, dp);
    }

    return dp[i] = max(one, two);
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> dp(n + 1, -1);
    cout << rec(0, s, dp) << endl;
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