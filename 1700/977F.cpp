#include <bits/stdc++.h>
#define int long long
using namespace std;

// int last = -1;
// int tab(vector<int> &v)
// {
//     int n = v.size();
//     map<pair<int, int>, int> dp;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = n - 1; j >= -1; j--)
//         {
//             int pick = 0, notPick = 0;
//             if (j == -1 || v[i] - v[j] == 1)
//             {
//                 pick = 1 + dp[{i + 1, i}];
//             }
//             notPick = dp[{i + 1, j}];
//             dp[{i, j}] = max(pick, notPick);
//         }
//     }
//     return dp[{0, -1}];
// }

int tab(vector<int> &v, vector<int> &ans)
{
    int n = v.size(), len = 0, val = 0;
    map<int, int> dp;
    for (int i = 0; i < n; i++)
    {
        dp[v[i]] = dp[v[i] - 1] + 1;
        if (dp[v[i]] > len)
        {
            len = dp[v[i]];
            val = v[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == val)
        {
            ans.push_back(i + 1);
            val--;
        }
    }

    reverse(ans.begin(), ans.end());

    return len;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto &it : v1)
    {
        cin >> it;
    }

    vector<int> ans;
    int c = tab(v1, ans);
    cout << c << endl;
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    // vector<int> v;
    // while (c--)
    // {
    //     v.push_back(last);
    //     last--;
    // }

    // reverse(v.begin(), v.end());
    // for (auto &it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
}

int32_t main()
{
    solve();
    cout << endl;
    return 0;
}