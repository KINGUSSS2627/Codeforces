// #include <bits/stdc++.h>
// #define int long long int
// #define tc while (t--)
// using namespace std;
// bool solve(int ind, int tar, vector<int> &v, vector<vector<int>> &dp)
// {
//     if (tar == 0)
//         return 1;
//     if (ind == 0)
//         return (tar % v[ind] == 0);
//     if (ind < 0)
//         return 0;
//     if (dp[ind][tar] != -1)
//         return dp[ind][tar];
//     int notpick = solve(ind - 1, tar, v, dp);
//     int pick = 0;
//     if (tar >= v[ind])
//         pick = solve(ind, tar - v[ind], v, dp);
//     return dp[ind][tar] = pick || notpick;
// }

// bool solve_tab(int n, int tar, vector<int> &v)
// {
//     vector<vector<int>> dp(n, vector<int>(tar + 1, 0));
//     for (int i = 0; i < n; i++)
//     {
//         dp[i][0] = 1;
//     }
//     dp[0][tar] = (tar % v[0] == 0);
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int target = 0; target <= tar; target++)
//         {
//             int notpick = dp[ind - 1][target];
//             int pick = 0;
//             if (target >= v[ind])
//                 pick = dp[ind][target - v[ind]];
//             dp[ind][target] = pick || notpick;
//         }
//     }
//     return dp[n - 1][tar];
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     vector<int> v = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
//     int t;
//     cin >> t;
//     tc
//     {
//         int n;
//         cin >> n;
//         vector<vector<int>> dp(8, vector<int>(n + 1, -1));
//         int t = solve(7, n, v, dp);
//         // int t1 = solve_tab(8, n, v);
//         if (t == 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

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
        int n;
        cin >> n;
        bool flag = 0;
        if (n % 11 == 0 || n % 111 == 0)
        {
            flag = 1;
        }
        while (n)
        {
            n -= 111;
            if (n < 0)
            {
                break;
            }
            if (n % 11 == 0 || n % 111 == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
